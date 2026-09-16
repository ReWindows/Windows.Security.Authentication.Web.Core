#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 73 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebTokenRequestResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebTokenRequestResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeObjectBytes@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long FreeObjectBytes(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectBytes@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long GetObjectBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromBytes@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAEK@Z
    virtual long InitializeObjectFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectFromPropertySet@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    long InitializeObjectFromPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCacheAsync@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long InvalidateCacheAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@QEAAJPEAU?$IVectorView@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@6@W4WebTokenRequestStatus@23456@PEAUIBuffer@Streams@Storage@6@PEAUIWebProviderError@23456@PEAUHSTRING__@@PEAUIWebAccountProvider@Credentials@56@UDateTime@96@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, ::Windows::Storage::Streams::IBuffer *, ::Windows::Security::Authentication::Web::Core::IWebProviderError *, HSTRING__*, ::Windows::Security::Credentials::IWebAccountProvider *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatus@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJW4WebTokenRequestStatus@23456@@Z
    virtual long UpdateStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheExpirationTime@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAUDateTime@Foundation@6@@Z
    virtual long get_CacheExpirationTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestProvider@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebAccountProvider@Credentials@56@@Z
    virtual long get_RequestProvider(::Windows::Security::Credentials::IWebAccountProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseData@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_ResponseData(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseError@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIWebProviderError@23456@@Z
    virtual long get_ResponseError(::Windows::Security::Authentication::Web::Core::IWebProviderError * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseStatus@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4WebTokenRequestStatus@23456@@Z
    virtual long get_ResponseStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestProvider@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@@Z
    virtual long put_RequestProvider(::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebTokenRequestResult();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectByteCount@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAK@Z
    virtual long GetObjectByteCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClassId@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@EEAAJPEAU_GUID@@@Z
    virtual long GetUnmarshalClassId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCommon@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long InitializeObjectCommon(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterfaceSupported@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@EEAA_NAEBU_GUID@@@Z
    virtual bool IsInterfaceSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@AEAAJAEAVCPropertiesSerializer@5Internal@6@@Z
    long Serialize(WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::Web::Core
