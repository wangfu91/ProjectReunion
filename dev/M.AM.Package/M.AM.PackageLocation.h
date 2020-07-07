// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageLocation.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageLocation : PackageLocationT<PackageLocation>
    {
        PackageLocation() = default;

        PackageLocation(Microsoft::ApplicationModel::Package const& package);
        hstring Path();
        Windows::Storage::StorageFolder Location();
        hstring InstalledPath();
        hstring MutablePath();
        hstring EffectivePath();
        hstring EffectiveExternalPath();
        hstring UserEffectiveExternalPath();
        hstring MachineEffectiveExternalPath();
        Windows::Storage::StorageFolder InstalledLocation();
        Windows::Storage::StorageFolder MutableLocation();
        Windows::Storage::StorageFolder EffectiveLocation();
        Windows::Storage::StorageFolder EffectiveExternalLocation();
        Windows::Storage::StorageFolder UserEffectiveExternalLocation();
        Windows::Storage::StorageFolder MachineEffectiveExternalLocation();

    private:
        Microsoft::ApplicationModel::Package m_package;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageLocation : PackageLocationT<PackageLocation, implementation::PackageLocation>
    {
    };
}
