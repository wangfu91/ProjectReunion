// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>

#include <M.AM.PackageIdentity.h>
#include <Microsoft.ApplicationModel.PackageIdentity.g.cpp>

namespace winrt::Microsoft::ApplicationModel::implementation
{
    PackageIdentity::PackageIdentity(Microsoft::ApplicationModel::Package const& package) :
        m_package(package),
        m_packageId(package.W_AM_Package().Id())
    {
    }
    hstring PackageIdentity::FormatPackageFullName(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisher)
    {
        throw hresult_not_implemented();
    }
    hstring PackageIdentity::FormatPackageFullNameGivenPublisherId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisherId)
    {
        throw hresult_not_implemented();
    }
    Microsoft::ApplicationModel::PackageIdentity PackageIdentity::ParsePackageFullName(hstring const& packageFullName)
    {
        throw hresult_not_implemented();
    }
    hstring PackageIdentity::FormatPackageFamilyName(hstring const& packageFullName)
    {
        throw hresult_not_implemented();
    }
    hstring PackageIdentity::FormatPackageFamilyName(hstring const& packagename, hstring const& publisher)
    {
        throw hresult_not_implemented();
    }
    hstring PackageIdentity::FormatPackageFamilyNameGivenPublisherId(hstring const& packagename, hstring const& publisherId)
    {
        throw hresult_not_implemented();
    }
    Microsoft::ApplicationModel::PackageFamilyNameTuple PackageIdentity::ParsePackageFamilyName(hstring const& packageFamilyName)
    {
        throw hresult_not_implemented();
    }
    bool PackageIdentity::VerifyPackageId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisher)
    {
        throw hresult_not_implemented();
    }
    bool PackageIdentity::VerifyPackageIdGivenPublisherId(hstring const& packagename, Windows::ApplicationModel::PackageVersion const& version, Windows::System::ProcessorArchitecture const& architecture, hstring const& resourceId, hstring const& publisherId)
    {
        throw hresult_not_implemented();
    }
    bool PackageIdentity::VerifyPackageFullName(hstring const& packageFullName)
    {
        throw hresult_not_implemented();
    }
    bool PackageIdentity::VerifyPackageFamilyName(hstring const& packageFullName)
    {
        throw hresult_not_implemented();
    }
    hstring PackageIdentity::Name()
    {
        return m_packageId.Name();
    }
    Windows::ApplicationModel::PackageVersion PackageIdentity::Version()
    {
        return m_packageId.Version();
    }
    Windows::System::ProcessorArchitecture PackageIdentity::Architecture()
    {
        return m_packageId.Architecture();
    }
    hstring PackageIdentity::ResouceId()
    {
        return m_packageId.ResourceId();
    }
    hstring PackageIdentity::Publisher()
    {
        return m_packageId.Publisher();
    }
    hstring PackageIdentity::PublisherId()
    {
        return m_packageId.PublisherId();
    }
    hstring PackageIdentity::PackageFullName()
    {
        return m_packageId.FullName();
    }
    hstring PackageIdentity::PackageFamilyName()
    {
        return m_packageId.FamilyName();
    }
}
