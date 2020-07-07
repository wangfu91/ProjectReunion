// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageInstallInfo.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageInstallInfo : PackageInstallInfoT<PackageInstallInfo>
    {
        PackageInstallInfo() = default;

        PackageInstallInfo(Microsoft::ApplicationModel::Package const& package);
        Windows::Foundation::DateTime WhenFirstRegisteredForUser();
        Windows::Foundation::DateTime WhenLastRegisteredForUser();
        Windows::ApplicationModel::AppInstallerInfo GetAppInstallerInfo();

    private:
        Microsoft::ApplicationModel::Package m_package;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageInstallInfo : PackageInstallInfoT<PackageInstallInfo, implementation::PackageInstallInfo>
    {
    };
}
