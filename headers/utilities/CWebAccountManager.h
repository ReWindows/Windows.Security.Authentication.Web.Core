#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 72 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountAsync(HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountForUserAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUser@System@6@PEAUHSTRING__@@1PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountForUserAsync(::Windows::System::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountWithScopeAndMapAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@W4WebAccountScope@23456@0PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountWithScopeAndMapAsync(HSTRING__*, HSTRING__*, WindissectOpaque *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountWithScopeAndMapForUserAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUser@System@6@PEAUHSTRING__@@1PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@W4WebAccountScope@23456@1PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountWithScopeAndMapForUserAsync(::Windows::System::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountWithScopeAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@W4WebAccountScope@23456@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountWithScopeAsync(HSTRING__*, HSTRING__*, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAccountWithScopeForUserAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUser@System@6@PEAUHSTRING__@@1PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@W4WebAccountScope@23456@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long AddWebAccountWithScopeForUserAsync(::Windows::System::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountManager@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPerUserFromPerAppAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long ClearPerUserFromPerAppAccountAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearViewAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAUIUriRuntimeClass@Foundation@6@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long ClearViewAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWebAccountPictureAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long ClearWebAccountPictureAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteWebAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long DeleteWebAccountAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllProviderWebAccountsAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@6@@Z
    virtual long FindAllProviderWebAccountsAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllProviderWebAccountsForUserAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUser@System@6@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@6@@Z
    virtual long FindAllProviderWebAccountsForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerUserFromPerAppAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long GetPerUserFromPerAppAccountAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAW4WebAccountScope@23456@@Z
    virtual long GetScope(::Windows::Security::Credentials::IWebAccount *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewsAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccountClientView@Provider@Web@Authentication@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@6@@Z
    virtual long GetViewsAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAppCacheForAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long InvalidateAppCacheForAccountAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAppCacheForAllAccountsAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long InvalidateAppCacheForAllAccountsAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullCookiesAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long PullCookiesAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushCookiesAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@6@PEAU?$IVectorView@PEAVHttpCookie@Http@Web@Windows@@@Collections@86@PEAPEAUIAsyncAction@86@@Z
    virtual long PushCookiesAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerAppToPerUserAccountAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetPerAppToPerUserAccountAsync(::Windows::Security::Credentials::IWebAccount *, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScopeAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@W4WebAccountScope@23456@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetScopeAsync(::Windows::Security::Credentials::IWebAccount *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAUIWebAccountClientView@23456@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetViewAsync(::Windows::Security::Credentials::IWebAccount *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebAccountPictureAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAUIRandomAccessStream@Streams@Storage@6@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetWebAccountPictureAsync(::Windows::Security::Credentials::IWebAccount *, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWebAccountPropertiesAsync@CWebAccountManager@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long UpdateWebAccountPropertiesAsync(::Windows::Security::Credentials::IWebAccount *, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Security::Authentication::Web::Provider
