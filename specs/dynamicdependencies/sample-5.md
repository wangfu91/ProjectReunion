# Sample 5 - LolzKitten app using PackageDependency pinned by LolzKitten Installer

Contoso publishes a framework package. At runtime, LolzKittens wants to use Contoso's functionality as specified by the package dependency defined when LolzKittens was installed.

## Win32

```c++
#include <MsixDynamicDependency.hpp>
#include <wil/resource.h>

HRESULT LoadPackageDependencyId(_In_ PCWSTR what, wil::unique_ptr<WCHAR[]>& packageDependencyId);

HRESULT ManageMuffins(int& countOfMuffinsManaged)
{
    countOfMuffinsManaged = 0;

    wil::unique_ptr<WCHAR[]> packageDependencyId;
    RETURN_IF_FAILED(LoadPackageDependencyId(L"muffins", packageDependencyId));

    const INT32 rank = PACKAGE_DEPENDENCY_RANK_DEFAULT;
    const UINT32 addFlags = MddAddPackageDependency::None;
    MDD_PACKAGEDEPENDENCY_CONTEXT packageDependencyContext = nullptr;
    wil::unique_hlocal_string packageFullName;
    RETURN_IF_FAILED(MddAddPackageDependency(
        packageDependencyId.get(), rank, addFlags, &packageDependencyContext, &packageFullName));
    wprintf(L"Managing muffins via %ls", packageFullName.get());

    wil::unique_hmodule contosoMuffinsDll(::LoadLibrary(L"Contoso-Muffins"));
    RETURN_LAST_ERROR_IF(!contosoMuffinsDll);

    typedef int (WINAPI * ManageMuffins)();
    auto manageMuffins = GetProcAddressByFunctionDeclaration(contosoMuffinsDll, ManageMuffins);
    RETURN_HR_IF_NULL(HRESULT_FROM_WIN32(GetLastError()), manageMuffins);

    countOfMuffinsManaged = (*manageMuffins)();

    (void) LOG_IF_FAILED(MddRemovePackageDependency(packageDependencyContext));

    return S_OK;
}

HRESULT LoadPackageDependencyId(_In_ PCWSTR what, wil::unique_ptr<WCHAR[]>& packageDependencyId)
{
    // Load the previously stored package dependency identifier

}
```

## WinRT

```c#
using Microsoft.ApplicationModel
{
***TODO***
}
```
