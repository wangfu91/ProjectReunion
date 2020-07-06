# Sample 3 - LolzKitten app using Contosso's Muffins package via transient package dependency

Contoso publishes a framework package. At runtime, LolzKittens wants to use Contoso's functionality for the life of its process. The dynamic dependency is added when the process starts and not explicitly removed, relying on Windows to detect process termination and cleanup any bookkeeping information about the former LolzKittens process despite no calls to ```MddRemovePackageDependency```. The package dependency is defined just long enough to resolve it to a specific package and update the current process to use it.

```MddPinPackageDependency``` will fail if there are no packages registered for the calling user satisfying the PackageDependency.

## Win32

```c++
#include <MsixDynamicDependency.hpp>
#include <wil/resource.h>

int __cdecl wmain(_In_ int argc, _In_reads_(argc) WCHAR * argv[])
{
    PCWSTR packageFamilyName = L"Contoso.muffins_1234567890abc";
    PACKAGE_VERSION minVersion{};
    minVersion.Major = 87;
    minVersion.Minor = 0;
    minVersion.Build = 1234;
    minVersion.Revision = 567;
    const auto architectureFilter = MddPackageDependencyProcessorArchitectures::None;
    const UINT32 pinFlags = MddPinPackageDependency::LifecycleHint_Process;
    wil::unique_hlocal_string packageDependencyId;
    RETURN_IF_FAILED(MddPinPackageDependency(
        packageFamilyName, minVersion, architecture, nullptr, pinFlags, &packageDependencyId));
    // lifetimeArtifact=null gives the PackageDepedency a lifetime of the current process
    // The PackageDependency is not persisted. It will be implicitly unpinned when the process terminates.

    const INT32 rank = PACKAGE_DEPENDENCY_RANK_DEFAULT;
    const UINT32 addFlags = MddAddPackageDependency::None;
    MDD_PACKAGEDEPENDENCY_CONTEXT packageDependencyContext = nullptr;
    wil::unique_hlocal_string packageFullName;
    RETURN_IF_FAILED(MddAddPackageDependency(
        packageDependencyId.get(), rank, addFlags, &packageDependencyContext, &packageFullName));
    wprintf(L"Managing muffins via %ls", packageFullName.get());

    // We don't need the package dependency definition anymore. We can continue using the package dependency
    // in the current process until we quit. To prevent others from using it we'll explicitly unpin the
    // package dependency. This prevents new MddAddPackageDependency calls from succeeding.
    (void) LOG_IF_FAILED(MddUnpinPackageDependency(packageDependencyId.get()));

    DoFunnyKittenThings();

    return S_OK;
}
```

## WinRT

```c#
using Microsoft.ApplicationModel
{
}
```
