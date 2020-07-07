// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageFamilyNameTuple.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageFamilyNameTuple : PackageFamilyNameTupleT<PackageFamilyNameTuple>
    {
        PackageFamilyNameTuple() = default;

        hstring Name();
        void Name(hstring const& value);
        hstring PublisherId();
        void PublisherId(hstring const& value);

    private:
        hstring m_name;
        hstring m_publisherId;
    };
}
