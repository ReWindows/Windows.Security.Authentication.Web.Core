#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 8 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class PluginRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPluginPFNToPluginId@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@PEAPEAU7@@Z
    static long ConvertPluginPFNToPluginId(HSTRING__* const, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProviderFromRegistration@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWamProviderRegistrationInformation@Web@3456@QEAUHSTRING__@@1_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long CreateProviderFromRegistration(WindissectOpaque *, HSTRING__* const, HSTRING__* const, uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultWebAccountProvider@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@00_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long GetDefaultWebAccountProvider(HSTRING__* const, HSTRING__* const, HSTRING__* const, uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPluginPFN@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWebAccountProvider@Credentials@46@PEAPEAUHSTRING__@@@Z
    static long GetPluginPFN(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemWebAccountProvider@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@0_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long GetSystemWebAccountProvider(HSTRING__* const, HSTRING__* const, uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountProviderFromIdAndAuthority@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@0_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long GetWebAccountProviderFromIdAndAuthority(HSTRING__* const, HSTRING__* const, uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountProviderFromSsoUri@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIUriRuntimeClass@Foundation@6@_KPEAPEAUIWebAccountProvider@Credentials@46@@Z
    static long GetWebAccountProviderFromSsoUri(WindissectOpaque *, uint64_t, ::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPluginMultiUserAware@PluginRegistration@TokenBroker@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@PEA_N@Z
    static long IsPluginMultiUserAware(HSTRING__* const, bool *);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker
