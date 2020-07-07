// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.FindRelatedPackageOptions.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct FindRelatedPackageOptions : FindRelatedPackageOptionsT<FindRelatedPackageOptions>
    {
        FindRelatedPackageOptions() = default;

        bool Dependencies();
        void Dependencies(bool value);
        bool Dependents();
        void Dependents(bool value);
        bool Framework();
        void Framework(bool value);
        bool Resource();
        void Resource(bool value);
        bool Optional();
        void Optional(bool value);
        bool OptionalInRelatedSet();
        void OptionalInRelatedSet(bool value);
        bool OptionalNotInRelatedSet();
        void OptionalNotInRelatedSet(bool value);
        hstring PackageFamilyName();
        void PackageFamilyName(hstring const& value);

    private:
        bool m_dependencies;
        bool m_dependents;
        bool m_framework;
        bool m_resource;
        bool m_optional;
        bool m_optionalInRelatedSet;
        bool m_optionalNotInRelatedSet;
        hstring m_packageFamilyName;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct FindRelatedPackageOptions : FindRelatedPackageOptionsT<FindRelatedPackageOptions, implementation::FindRelatedPackageOptions>
    {
    };
}
