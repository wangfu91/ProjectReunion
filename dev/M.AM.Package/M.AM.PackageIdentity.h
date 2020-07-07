// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageIdentity.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageIdentity : PackageIdentityT<PackageIdentity>
    {
        PackageIdentity() = default;

        PackageIdentity(Microsoft::ApplicationModel::Package const& package);
        static hstring FormatPackageFullName(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisher);
        static hstring FormatPackageFullNameGivenPublisherId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisherId);
        static Microsoft::ApplicationModel::PackageIdentity ParsePackageFullName(hstring const& packageFullName);
        static hstring FormatPackageFamilyName(hstring const& packageFullName);
        static hstring FormatPackageFamilyName(hstring const& packagename, hstring const& publisher);
        static hstring FormatPackageFamilyNameGivenPublisherId(hstring const& packagename, hstring const& publisherId);
        static Microsoft::ApplicationModel::PackageFamilyNameTuple ParsePackageFamilyName(hstring const& packageFamilyName);
        static bool VerifyPackageId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisher);
        static bool VerifyPackageIdGivenPublisherId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisherId);
        static bool VerifyPackageFullName(hstring const& packageFullName);
        static bool VerifyPackageFamilyName(hstring const& packageFullName);
        hstring Name();
        Windows::ApplicationModel::PackageVersion Version();
        Windows::System::ProcessorArchitecture Architecture();
        hstring ResouceId();
        hstring Publisher();
        hstring PublisherId();
        hstring PackageFullName();
        hstring PackageFamilyName();

    private:
        Microsoft::ApplicationModel::Package m_package;
        Windows::ApplicationModel::PackageId m_packageId;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageIdentity : PackageIdentityT<PackageIdentity, implementation::PackageIdentity>
    {
    };
}
