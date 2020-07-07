// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageGraph.h>
#include <Microsoft.ApplicationModel.PackageGraph.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    PackageGraph::PackageGraph(Microsoft::ApplicationModel::Package const& package) :
        m_package(package)
    {
    }
    Windows::Foundation::Collections::IVector<Microsoft::ApplicationModel::Package> PackageGraph::FindRelatedPackages()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::Collections::IVector<Microsoft::ApplicationModel::Package> PackageGraph::FindRelatedPackages(Microsoft::ApplicationModel::FindRelatedPackageOptions const& options)
    {
        throw hresult_not_implemented();
    }
}
