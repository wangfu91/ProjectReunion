// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageInstallInfo.h>
#include <Microsoft.ApplicationModel.PackageInstallInfo.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    PackageInstallInfo::PackageInstallInfo(Microsoft::ApplicationModel::Package const& package) :
        m_package(package)
    {
    }
    Windows::Foundation::DateTime PackageInstallInfo::WhenFirstRegisteredForUser()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::DateTime PackageInstallInfo::WhenLastRegisteredForUser()
    {
        return m_package.W_AM_Package().InstalledDate();
    }
    Windows::ApplicationModel::AppInstallerInfo PackageInstallInfo::GetAppInstallerInfo()
    {
        return m_package.W_AM_Package().GetAppInstallerInfo();
    }
}
