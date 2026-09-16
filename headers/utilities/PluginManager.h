#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 11 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class PluginManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareProviders@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWebAccountProvider@Credentials@46@PEAUHSTRING__@@01PEAE@Z
    static long CompareProviders(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, ::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConnectedAccountProvider@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJ_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long CreateConnectedAccountProvider(uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltInProviderType@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SA?AW4BuiltInProviderType@23456@PEAUIWebAccountProvider@Credentials@46@@Z
    static int GetBuiltInProviderType(::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltInProviderType@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SA?AW4BuiltInProviderType@23456@PEAUHSTRING__@@0@Z
    static int GetBuiltInProviderType(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedAccountProvider@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SA_NPEAUIWebAccountProvider@Credentials@46@@Z
    static bool IsConnectedAccountProvider(::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultWABBridgeProviderId@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SA_NPEAUHSTRING__@@@Z
    static bool IsDefaultWABBridgeProviderId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemProvider@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SA_NPEAUIWebAccountProvider@Credentials@46@@Z
    static bool IsSystemProvider(::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapAliasesToPluginId@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWebAccountProvider@Credentials@46@AEAVString@56@11@Z
    static long MapAliasesToPluginId(::Windows::Security::Credentials::IWebAccountProvider *, ::Windows::Internal::String &, ::Windows::Internal::String &, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapAliasesToPluginId@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUHSTRING__@@0AEAVString@56@@Z
    static long MapAliasesToPluginId(HSTRING__*, HSTRING__*, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPluginIdToAliases@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUHSTRING__@@AEAVString@56@1@Z
    static long MapPluginIdToAliases(HSTRING__*, ::Windows::Internal::String &, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateProvider@PluginManager@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWebAccountProvider@Credentials@46@_N@Z
    static long ValidateProvider(::Windows::Security::Credentials::IWebAccountProvider *, bool);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker
