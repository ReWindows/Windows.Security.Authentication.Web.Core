#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 31 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderTriggerDetails {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderTriggerDetails();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@QEAAJKPEAE@Z
    long RuntimeClassInitialize(unsigned long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Operation@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccountProviderOperation@23456@@Z
    virtual long get_Operation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUser@System@6@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderTriggerDetails@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountProviderTriggerDetails();
};
} // namespace Windows::Security::Authentication::Web::Provider
