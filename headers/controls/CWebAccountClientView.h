#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 28 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountClientView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountClientView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@QEAAJW4WebAccountClientViewType@23456@PEAUIUriRuntimeClass@Foundation@6@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(int, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccountPairwiseId@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AccountPairwiseId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationCallbackUri@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_ApplicationCallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4WebAccountClientViewType@23456@@Z
    virtual long get_Type(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountClientView@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAccountClientView();
};
} // namespace Windows::Security::Authentication::Web::Provider
