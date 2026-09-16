#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 51 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CFindAllAccountsResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CFindAllAccountsResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromPropertySet@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    long InitializeObjectFromPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@W4FindAllWebAccountsStatus@23456@PEAUIWebProviderError@23456@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, ::Windows::Security::Authentication::Web::Core::IWebProviderError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@W4FindAllWebAccountsStatus@23456@K@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Accounts@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Accounts(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderError@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebProviderError@23456@@Z
    virtual long get_ProviderError(::Windows::Security::Authentication::Web::Core::IWebProviderError * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4FindAllWebAccountsStatus@23456@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CFindAllAccountsResult();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Core
