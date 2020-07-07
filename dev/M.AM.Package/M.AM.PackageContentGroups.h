// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageContentGroups.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageContentGroups : PackageContentGroupsT<PackageContentGroups>
    {
        PackageContentGroups() = default;

        PackageContentGroups(Microsoft::ApplicationModel::Package const& package);
        Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> GetContentGroupAsync(hstring name);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> GetContentGroupsAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> StageContentGroups();

    private:
        Microsoft::ApplicationModel::Package m_package;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageContentGroups : PackageContentGroupsT<PackageContentGroups, implementation::PackageContentGroups>
    {
    };
}
