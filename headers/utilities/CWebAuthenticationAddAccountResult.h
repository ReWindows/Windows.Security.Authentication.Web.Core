#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 49 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationAddAccountResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAuthenticationAddAccountResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromPropertySet@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    long InitializeObjectFromPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseData@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAuthenticationAddAccountResponse@23456@@Z
    virtual long get_ResponseData(::Windows::Security::Authentication::Web::Core::IWebAuthenticationAddAccountResponse * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseError@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebProviderError@23456@@Z
    virtual long get_ResponseError(::Windows::Security::Authentication::Web::Core::IWebProviderError * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseStatus@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4WebAuthenticationAddAccountStatus@23456@@Z
    virtual long get_ResponseStatus(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAuthenticationAddAccountResult();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Core
