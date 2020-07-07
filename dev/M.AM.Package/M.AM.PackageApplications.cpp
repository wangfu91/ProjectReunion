// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageApplications.h>
#include <Microsoft.ApplicationModel.PackageApplications.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    PackageApplications::PackageApplications(Microsoft::ApplicationModel::Package const& package) :
        m_package(package)
    {
    }
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Core::AppListEntry> PackageApplications::GetAppListEntries()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Core::AppListEntry>> PackageApplications::GetAppListEntriesAsync()
    {
        throw hresult_not_implemented();
    }
}
