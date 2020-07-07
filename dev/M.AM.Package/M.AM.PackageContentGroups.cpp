// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageContentGroups.h>
#include <Microsoft.ApplicationModel.PackageContentGroups.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    PackageContentGroups::PackageContentGroups(Microsoft::ApplicationModel::Package const& package) :
        m_package(package)
    {
    }
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> PackageContentGroups::GetContentGroupAsync(hstring name)
    {
        return m_package.W_AM_Package().GetContentGroupAsync(name);
    }
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> PackageContentGroups::GetContentGroupsAsync()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> PackageContentGroups::StageContentGroups()
    {
        throw hresult_not_implemented();
    }
}
