#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 25 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAccountEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIWebAccount@Credentials@56@@Z
    long RuntimeClassInitialize(::Windows::Security::Credentials::IWebAccount *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Account@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccount@Credentials@56@@Z
    virtual long get_Account(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CorrelationId@CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CorrelationId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountEventArgs@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountEventArgs();
};
} // namespace Windows::Security::Authentication::Web::Core
