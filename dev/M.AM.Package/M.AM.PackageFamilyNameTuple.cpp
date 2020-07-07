// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageFamilyNameTuple.h>
#include <Microsoft.ApplicationModel.PackageFamilyNameTuple.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    hstring PackageFamilyNameTuple::Name()
    {
        return m_name;
    }
    void PackageFamilyNameTuple::Name(hstring const& value)
    {
        m_name = value;
    }
    hstring PackageFamilyNameTuple::PublisherId()
    {
        return m_publisherId;
    }
    void PackageFamilyNameTuple::PublisherId(hstring const& value)
    {
        m_publisherId = value;
    }
}
