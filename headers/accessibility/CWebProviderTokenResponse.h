#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 40 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebProviderTokenResponse {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebProviderTokenResponse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@QEAAJPEAUIWebTokenResponse@Core@3456@@Z
    long RuntimeClassInitialize(::Windows::Security::Authentication::Web::Core::IWebTokenResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientResponse@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebTokenResponse@Core@3456@@Z
    virtual long get_ClientResponse(::Windows::Security::Authentication::Web::Core::IWebTokenResponse * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebProviderTokenResponse();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Provider
