#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 55 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderRetrieveCookiesOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderRetrieveCookiesOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@SAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@AEAU_GUID@@1PEAPEAUIWebAccountProviderOperation@23456@@Z
    static long Deserialize(WindissectOpaque &, _GUID &, _GUID &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebProviderError@Core@3456@@Z
    virtual long ReportError(::Windows::Security::Authentication::Web::Core::IWebProviderError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@QEAAJW4WebAccountProviderOperationKind@23456@PEAUIUriRuntimeClass@Foundation@6@AEAU_GUID@@21@Z
    long RuntimeClassInitialize(int, WindissectOpaque *, _GUID &, _GUID &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@SAJPEAUIHttpCookie@Http@36@AEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    static long Serialize(::Windows::Web::Http::IHttpCookie *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@SAJPEAV123456@AEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    static long Serialize(WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationCallbackUri@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_ApplicationCallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cookies@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVector@PEAVHttpCookie@Http@Web@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Cookies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderRetrieveCookiesOperation@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountProviderRetrieveCookiesOperation();
};
} // namespace Windows::Security::Authentication::Web::Provider
