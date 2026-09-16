#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 52 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationTransferTokenRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAuthenticationTransferTokenRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@1@Z
    long RuntimeClassInitialize(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CorrelationId@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CorrelationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransferToken@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TransferToken(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccountProvider@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccountProvider@Credentials@56@@Z
    virtual long get_WebAccountProvider(::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CorrelationId@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CorrelationId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransferToken@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TransferToken(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAuthenticationTransferTokenRequest();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebAuthenticationTransferTokenRequest@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Core
