// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.FindPackageOptions.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct FindPackageOptions : FindPackageOptionsT<FindPackageOptions>
    {
        FindPackageOptions() = default;

        Windows::System::User User();
        void User(Windows::System::User const& value);
        hstring PackageFullName();
        void PackageFullName(hstring const& value);
        hstring PackageFamilyName();
        void PackageFamilyName(hstring const& value);
        hstring PackageName();
        void PackageName(hstring const& value);
        hstring PackagePublisher();
        void PackagePublisher(hstring const& value);
        hstring PackagePublisherId();
        void PackagePublisherId(hstring const& value);
        bool IsMain();
        void IsMain(bool value);
        bool IsFramework();
        void IsFramework(bool value);
        bool IsResource();
        void IsResource(bool value);
        bool IsOptional();
        void IsOptional(bool value);
        bool IsOptionalInRelatedSet();
        void IsOptionalInRelatedSet(bool value);
        bool IsOptionalNotInRelatedSet();
        void IsOptionalNotInRelatedSet(bool value);
        bool IsBundle();
        void IsBundle(bool value);
        bool IsProvisioned();
        void IsProvisioned(bool value);
    };
}
