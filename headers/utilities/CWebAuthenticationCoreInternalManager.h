#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 18 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class CWebAuthenticationCoreInternalManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookiesAsync@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@@86@@Z
    virtual long GetCookiesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAuthenticationCoreInternalManager@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Internal::Security::Authentication::Web
