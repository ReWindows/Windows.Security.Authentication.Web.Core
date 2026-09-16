#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 50 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderSignOutAccountOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderSignOutAccountOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebProviderError@Core@3456@@Z
    virtual long ReportError(::Windows::Security::Authentication::Web::Core::IWebProviderError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@QEAAJW4WebAccountProviderOperationKind@23456@PEAUIWebAccount@Credentials@56@AEAU_GUID@@2PEAUHSTRING__@@3@Z
    long RuntimeClassInitialize(int, ::Windows::Security::Credentials::IWebAccount *, _GUID &, _GUID &, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationCallbackUri@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_ApplicationCallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientId@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ClientId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccount@CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccount@Credentials@56@@Z
    virtual long get_WebAccount(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderSignOutAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountProviderSignOutAccountOperation();
};
} // namespace Windows::Security::Authentication::Web::Provider
