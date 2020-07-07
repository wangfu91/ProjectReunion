// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.FindRelatedPackageOptions.h>
#include <Microsoft.ApplicationModel.FindRelatedPackageOptions.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    bool FindRelatedPackageOptions::Dependencies()
    {
        return m_dependencies;
    }
    void FindRelatedPackageOptions::Dependencies(bool value)
    {
        m_dependencies = value;
    }
    bool FindRelatedPackageOptions::Dependents()
    {
        return m_dependents;
    }
    void FindRelatedPackageOptions::Dependents(bool value)
    {
        m_dependents = value;
    }
    bool FindRelatedPackageOptions::Framework()
    {
        return m_framework;
    }
    void FindRelatedPackageOptions::Framework(bool value)
    {
        m_framework = value;
    }
    bool FindRelatedPackageOptions::Resource()
    {
        return m_resource;
    }
    void FindRelatedPackageOptions::Resource(bool value)
    {
        m_resource = value;
    }
    bool FindRelatedPackageOptions::Optional()
    {
        return m_optional;
    }
    void FindRelatedPackageOptions::Optional(bool value)
    {
        m_optional = value;
    }
    bool FindRelatedPackageOptions::OptionalInRelatedSet()
    {
        return m_optionalInRelatedSet;
    }
    void FindRelatedPackageOptions::OptionalInRelatedSet(bool value)
    {
        m_optionalInRelatedSet = value;
    }
    bool FindRelatedPackageOptions::OptionalNotInRelatedSet()
    {
        return m_optionalNotInRelatedSet;
    }
    void FindRelatedPackageOptions::OptionalNotInRelatedSet(bool value)
    {
        m_optionalNotInRelatedSet = value;
    }
    hstring FindRelatedPackageOptions::PackageFamilyName()
    {
        return m_packageFamilyName;
    }
    void FindRelatedPackageOptions::PackageFamilyName(hstring const& value)
    {
        m_packageFamilyName = value;
    }
}
