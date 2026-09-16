#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 59 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderGetTokenSilentOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderGetTokenSilentOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@SAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@AEAU_GUID@@1PEAPEAUIWebAccountProviderOperation@23456@@Z
    static long Deserialize(WindissectOpaque &, _GUID &, _GUID &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebProviderError@Core@3456@@Z
    virtual long ReportError(::Windows::Security::Authentication::Web::Core::IWebProviderError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUserInteractionRequired@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ReportUserInteractionRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUserInteractionRequiredWithError@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebProviderError@Core@3456@@Z
    virtual long ReportUserInteractionRequiredWithError(::Windows::Security::Authentication::Web::Core::IWebProviderError *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeResponsesAndCompleteAction@CWebAccountProviderGetTokenSilentOperation@Provider@Web@Authentication@Security@Windows@@AEAAJPEAU?$IVector@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@6@W4WebTokenRequestStatus@Core@3456@PEAUIWebProviderError@Core@3456@@Z
    long SerializeResponsesAndCompleteAction(WindissectOpaque *, int, ::Windows::Security::Authentication::Web::Core::IWebProviderError *);
};
} // namespace Windows::Security::Authentication::Web::Provider
