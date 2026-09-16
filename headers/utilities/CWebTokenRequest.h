#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 91 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebTokenRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebTokenRequest@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebTokenRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidForApp@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPackageSidForApp(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestHash@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAE@Z
    virtual long GetRequestHash(unsigned long *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromPropertySet@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    long InitializeObjectFromPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIWebTokenRequest@23456@PEAUIWebAccountProvider@Credentials@56@@Z
    long RuntimeClassInitialize(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, ::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageSidForApp@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetPackageSidForApp(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestHash@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJKPEAE@Z
    virtual long SetRequestHash(unsigned long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XudkGetPackageSidForApp@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long XudkGetPackageSidForApp(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XudkSetPackageSidForApp@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long XudkSetPackageSidForApp(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppProperties@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@@Z
    virtual long get_AppProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientId@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ClientId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CorrelationId@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CorrelationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PromptType@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4WebTokenRequestPromptType@23456@@Z
    virtual long get_PromptType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scope@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Scope(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccountProvider@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccountProvider@Credentials@56@@Z
    virtual long get_WebAccountProvider(::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CorrelationId@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CorrelationId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebTokenRequest@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebTokenRequest();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebTokenRequest@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Core
