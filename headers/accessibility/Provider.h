#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web {
class Provider {
public:
    class CWebAccountClientView;
    class CWebAccountClientViewFactory;
    class CWebAccountManager;
    class CWebAccountProviderDeleteAccountOperation;
    class CWebAccountProviderGetTokenSilentOperation;
    class CWebAccountProviderOperationBase;
    class CWebAccountProviderOperationReportBase;
    class CWebAccountProviderOperationReportSilentBase;
    class CWebAccountProviderRequestTokenBase;
    class CWebAccountProviderRetrieveCookiesOperation;
    class CWebAccountProviderSignOutAccountOperation;
    class CWebAccountProviderTriggerDetails;
    class CWebAccountProviderTriggerDetailsFactory;
    class CWebProviderTokenRequest;
    class CWebProviderTokenResponse;
    class CWebProviderTokenResponseFactory;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderAddAccountOperation@Provider@Web@Authentication@Security@Windows@@YAJPEAUHSTRING__@@00PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@W4WebAccountScope@12345@0_K_NPEAPEAUIWebAccount@Credentials@45@@Z
    long ProviderAddAccountOperation(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, int, HSTRING__*, uint64_t, bool, ::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDeleteAccountAction@Provider@Web@Authentication@Security@Windows@@YAJPEAUHSTRING__@@0W4WebAccountScope@12345@_K_N@Z
    long ProviderDeleteAccountAction(HSTRING__*, HSTRING__*, int, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderGetMapForPerAppOperation@Provider@Web@Authentication@Security@Windows@@YAJPEAUIWebAccount@Credentials@45@PEAPEAU6745@@Z
    long ProviderGetMapForPerAppOperation(::Windows::Security::Credentials::IWebAccount *, ::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderInvalidateAppCacheAction@Provider@Web@Authentication@Security@Windows@@YAJPEAUHSTRING__@@0@Z
    long ProviderInvalidateAppCacheAction(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderOperationFactory@Provider@Web@Authentication@Security@Windows@@YAJPEAUIPropertySet@Collections@Foundation@5@W4WebAccountProviderOperationKind@12345@AEAU_GUID@@2PEAPEAUIWebAccountProviderOperation@12345@@Z
    long ProviderOperationFactory(WindissectOpaque *, int, _GUID &, _GUID &, WindissectOpaque * *);
};
} // namespace Windows::Security::Authentication::Web
