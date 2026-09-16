#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 60 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebProviderTokenRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebProviderTokenRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckApplicationForCapabilityAsync@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long CheckApplicationForCapabilityAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationTokenBindingKeyAsync@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJW4TokenBindingKeyType@3456@PEAUIUriRuntimeClass@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVCryptographicKey@Core@Cryptography@Security@Windows@@@96@@Z
    virtual long GetApplicationTokenBindingKeyAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationTokenBindingKeyIdAsync@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJW4TokenBindingKeyType@3456@PEAUIUriRuntimeClass@Foundation@6@PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@96@@Z
    virtual long GetApplicationTokenBindingKeyIdAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@QEAAJPEAUIWebTokenRequest@Core@3456@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@W4WebAccountSelectionOptions@23456@PEAUIUriRuntimeClass@Foundation@6@_KPEAUHSTRING__@@5@Z
    long RuntimeClassInitialize(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, int, WindissectOpaque *, uint64_t, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationCallbackUri@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    virtual long get_ApplicationCallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationPackageFamilyName@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationProcessName@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationProcessName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientRequest@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebTokenRequest@Core@3456@@Z
    virtual long get_ClientRequest(::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccountSelectionOptions@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4WebAccountSelectionOptions@23456@@Z
    virtual long get_WebAccountSelectionOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccounts@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_WebAccounts(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebProviderTokenRequest();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebProviderTokenRequest@Provider@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Provider
