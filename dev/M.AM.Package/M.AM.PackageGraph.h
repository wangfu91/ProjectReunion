// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <Microsoft.ApplicationModel.PackageGraph.g.h>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    struct PackageGraph : PackageGraphT<PackageGraph>
    {
        PackageGraph() = default;

        PackageGraph(Microsoft::ApplicationModel::Package const& package);
        Windows::Foundation::Collections::IVector<Microsoft::ApplicationModel::Package> FindRelatedPackages();
        Windows::Foundation::Collections::IVector<Microsoft::ApplicationModel::Package> FindRelatedPackages(Microsoft::ApplicationModel::FindRelatedPackageOptions const& options);

    private:
        Microsoft::ApplicationModel::Package m_package;
    };
}
namespace winrt::Microsoft::ApplicationModel::factory_implementation
{
    struct PackageGraph : PackageGraphT<PackageGraph, implementation::PackageGraph>
    {
    };
}
