# Sample 7 - LolzKitten app ordering Packages in PackageGraph

Contoso publishes framework packages. At runtime, LolzKittens wants to use Contoso's functionality as specified by the package dependencies defined when LolzKittens was installed. These framework packages are added to the process' package graph in a verify specific order:
* Muffins
* process' static package graph (if any)
* Waffles

The package dependencies are added to the package graph with specific 'rank' values to ensure the desired order.

The package graph is updated for the remainder of the process' lifetime (i.e. the package dependencies are not explicitly removed).

# Win32 7 - LolzKitten app ordering Packages in PackageGraph

```c++
#include <DynamicDependencies.h>
#include <wil/resource.h>

HRESULT LoadPackageDependencyId(_In_ PCWSTR what, wil::unique_ptr<WCHAR[]>& packageDependencyId);
HRESULT AddToPackageGraph(_In_ PCWSTR what, _In_ PCWSTR packageDependencyId, INT32 rank);

HRESULT UpdatePackageGraph()
{
    wil::unique_ptr<WCHAR[]> muffinsPackageDependencyId;
    RETURN_IF_FAILED(LoadPackageDependencyId(L"muffins", muffinsPackageDependencyId));
    const INT32 muffinsRank = -42;
    RETURN_IF_FAILED(AddToPackageGraph(muffinsPackageDependencyId.get(), muffinsRank));

    wil::unique_ptr<WCHAR[]> wafflesPackageDependencyId;
    RETURN_IF_FAILED(LoadPackageDependencyId(L"waffles", wafflesPackageDependencyId));
    const INT32 wafflesRank = 3000;
    RETURN_IF_FAILED(AddToPackageGraph(wafflesPackageDependencyId.get(), wafflesRank));

    return S_OK;
}

HRESULT AddToPackageGraph(_In_ PCWSTR what, _In_ PCWSTR packageDependencyId, INT32 rank)
{
    const UINT32 flags = MddAddPackageDependency::None;
    MDD_PACKAGEDEPENDENCY_CONTEXT packageDependencyContext = nullptr;
    wil::unique_hlocal_string packageFullName;
    RETURN_IF_FAILED(MddAddPackageDependency(
        packageDependencyId, rank, flags, &packageDependencyContext, &packageFullName));
    wprintf(L"%ls resolved to %ls", what, packageFullName.get());

    return S_OK;
}

HRESULT LoadPackageDependencyId(_In_ PCWSTR what, wil::unique_ptr<WCHAR[]>& packageDependencyId)
{
    // Load the previously stored package dependency identifier
}
```

# WinRT 7 - LolzKitten app ordering Packages in PackageGraph

```c#
using Microsoft.ApplicationModel
{
}
```
