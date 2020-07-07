// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageApplications.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageApplications : PackageApplicationsT<PackageApplications>
    {
        PackageApplications() = default;

        PackageApplications(Microsoft::ApplicationModel::Package const& package);
        Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Core::AppListEntry> GetAppListEntries();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Core::AppListEntry>> GetAppListEntriesAsync();

    private:
        Microsoft::ApplicationModel::Package m_package;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageApplications : PackageApplicationsT<PackageApplications, implementation::PackageApplications>
    {
    };
}
