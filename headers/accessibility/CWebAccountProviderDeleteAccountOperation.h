#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 50 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderDeleteAccountOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderDeleteAccountOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@SAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@AEAU_GUID@@1PEAPEAUIWebAccountProviderOperation@23456@@Z
    static long Deserialize(WindissectOpaque &, _GUID &, _GUID &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebProviderError@Core@3456@@Z
    virtual long ReportError(::Windows::Security::Authentication::Web::Core::IWebProviderError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@QEAAJW4WebAccountProviderOperationKind@23456@PEAUIWebAccount@Credentials@56@AEAU_GUID@@2@Z
    long RuntimeClassInitialize(int, ::Windows::Security::Credentials::IWebAccount *, _GUID &, _GUID &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@SAJPEAV123456@PEAPEAUIBuffer@Streams@Storage@6@@Z
    static long Serialize(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccount@CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccount@Credentials@56@@Z
    virtual long get_WebAccount(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderDeleteAccountOperation@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountProviderDeleteAccountOperation();
};
} // namespace Windows::Security::Authentication::Web::Provider
