#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 27 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class CHttpCookieRequestResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@QEAA@XZ
    CHttpCookieRequestResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerialize@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@SAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAPEAUIHttpCookie@Http@26@@Z
    static long DeSerialize(WindissectOpaque &, ::Windows::Web::Http::IHttpCookie * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerialize@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@SAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAPEAUIHttpCookieRequestResult@23456@@Z
    static long DeSerialize(WindissectOpaque &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@QEAAJPEAU?$IVector@PEAVHttpCookie@Http@Web@Windows@@@Collections@Foundation@6@PEAUIUriRuntimeClass@96@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cookies@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVHttpCookie@Http@Web@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Cookies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHttpCookieRequestResult@Web@Authentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~CHttpCookieRequestResult();
};
} // namespace Windows::Internal::Security::Authentication::Web
