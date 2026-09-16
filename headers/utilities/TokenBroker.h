#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 63 member(s).
namespace Windows::Internal::Security::Authentication {
class TokenBroker {
public:
    class EnvironmentStringCache;
    class JsonObjectHeader;
    class JsonObjectProperty;
    class JsonObjectReader;
    class JsonObjectWriter;
    class PluginManager;
    class PluginRegistration;
    class StoredObjectId;
    class StoredObjectInfo;
    class StoredObjectInfoWithCache;
    class SystemExtension;
    class SystemExtensionRegistration;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebTokenResponsesToCache@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@PEAU?$IVectorView@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@5@W4WebTokenRequestStatus@78235@UDateTime@Foundation@5@PEAUIWebProviderError@78235@PEAUIBuffer@Streams@Storage@5@7PEAPEAUIBuffer@Streams@Storage@5@PEBG@Z
    long AddWebTokenResponsesToCache(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, HSTRING__*, WindissectOpaque *, int, WindissectOpaque, ::Windows::Security::Authentication::Web::Core::IWebProviderError *, ::Windows::Storage::Streams::IBuffer *, ::Windows::Storage::Streams::IBuffer *, ::Windows::Storage::Streams::IBuffer * *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCacheForWebTokenResponses@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@PEAUIWebAccountProvider@Credentials@35@_NPEA_NPEAPEAU?$IVector@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@5@PEAPEAUIWebProviderError@78235@PEAW4WebTokenRequestStatus@78235@PEAPEAUIBuffer@Streams@Storage@5@PEBG@Z
    long CheckCacheForWebTokenResponses(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, HSTRING__*, ::Windows::Security::Credentials::IWebAccountProvider *, bool, bool *, WindissectOpaque * *, ::Windows::Security::Authentication::Web::Core::IWebProviderError * *, int *, ::Windows::Storage::Streams::IBuffer * *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapability@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEBGPEA_N@Z
    long CheckCapability(IUnknown *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructWebProviderTokenRequest@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@_N3_K2PEAPEAUIWebProviderTokenRequest@Provider@8235@@Z
    long ConstructWebProviderTokenRequest(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, HSTRING__*, bool, bool, uint64_t, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCryptographicKeyFromPublicKeyBuffer@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIBuffer@Streams@Storage@5@W4TokenBindingKeyType@Web@235@PEAPEAUICryptographicKey@Core@Cryptography@35@@Z
    long CreateCryptographicKeyFromPublicKeyBuffer(::Windows::Storage::Streams::IBuffer *, int, ::Windows::Security::Cryptography::Core::ICryptographicKey * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTokenBrokerInternalStatics@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAPEAUITokenBrokerInternalStatics@Web@2345@@Z
    long CreateTokenBrokerInternalStatics(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerializePropertySet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIBuffer@Streams@Storage@5@PEAPEAUIPropertySet@Collections@Foundation@5@@Z
    long DeSerializePropertySet(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerializeWebTokenRequestFromValueSet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@5@PEAPEAUIWebTokenRequest@Core@Web@235@@Z
    long DeSerializeWebTokenRequestFromValueSet(WindissectOpaque *, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerializeWebTokenRequestResultOperationParamsFromValueSet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@5@W4AccountLookupContext@12345@PEAUHSTRING__@@PEAPEAUIWebTokenRequest@Core@Web@235@PEAPEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@785@E@Z
    long DeSerializeWebTokenRequestResultOperationParamsFromValueSet(WindissectOpaque *, int, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *, WindissectOpaque * *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeSerializeWebTokenResponsesWithStatus@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUHSTRING__@@W4AccountLookupContext@12345@PEAUIBuffer@Streams@Storage@5@PEAUIWebAccountProvider@Credentials@35@PEAW4WebTokenRequestStatus@Core@Web@235@PEAUDateTime@Foundation@5@PEAPEAUIWebProviderError@Core@Web@235@PEAPEAU?$IVector@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@5@@Z
    long DeSerializeWebTokenResponsesWithStatus(HSTRING__*, int, ::Windows::Storage::Streams::IBuffer *, ::Windows::Security::Credentials::IWebAccountProvider *, int *, WindissectOpaque *, ::Windows::Security::Authentication::Web::Core::IWebProviderError * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateCurrentProcessHandleForServerProcess@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@KPEAPEAX@Z
    long DuplicateCurrentProcessHandleForServerProcess(IUnknown *, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountIdFromWebAccount@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebAccount@Credentials@35@PEAPEAUHSTRING__@@@Z
    long GetAccountIdFromWebAccount(::Windows::Security::Credentials::IWebAccount *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferFromByteArray@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAEIPEAPEAUIBuffer@Streams@Storage@5@@Z
    long GetBufferFromByteArray(unsigned char *, unsigned int, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingAppName@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEAPEAUHSTRING__@@@Z
    long GetCallingAppName(IUnknown *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingAppPackageFamilyName@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEAPEAUHSTRING__@@PEAX@Z
    long GetCallingAppPackageFamilyName(IUnknown *, HSTRING__* *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessImageName@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEAPEAUHSTRING__@@@Z
    long GetCallingProcessImageName(IUnknown *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingServiceName@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEBGPEAPEAUHSTRING__@@@Z
    long GetCallingServiceName(IUnknown *, unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientWindowHandle@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEAPEAUHWND__@@@Z
    long GetClientWindowHandle(IUnknown *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEA_K@Z
    long GetCurrentUserContext(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveImpersonationContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJ_KPEA_K@Z
    long GetEffectiveImpersonationContext(uint64_t, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServerProcessHandle@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEAPEAX@Z
    long GetServerProcessHandle(IUnknown *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextFromIUser@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUser@System@5@PEA_K@Z
    long GetUserContextFromIUser(::Windows::System::IUser *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextFromProvider@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebAccountProvider@Credentials@35@AEA_K@Z
    long GetUserContextFromProvider(::Windows::Security::Credentials::IWebAccountProvider *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextFromUserSid@TokenBroker@Authentication@Security@Internal@Windows@@YAJAEAVString@45@AEA_K@Z
    long GetUserContextFromUserSid(::Windows::Internal::String &, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextFromWebAccount@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebAccount@Credentials@35@AEA_K@Z
    long GetUserContextFromWebAccount(::Windows::Security::Credentials::IWebAccount *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserFromUserContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJ_KPEAPEAUIUser@System@5@@Z
    long GetUserFromUserContext(uint64_t, ::Windows::System::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidFromUserContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJ_KAEAVString@45@@Z
    long GetUserSidFromUserContext(uint64_t, ::Windows::Internal::String &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebTokenResponsesFromWebProviderTokenResponses@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAU?$IVector@PEAVWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@@Collections@Foundation@5@PEAPEAU?$IVector@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@785@@Z
    long GetWebTokenResponsesFromWebProviderTokenResponses(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallFromVailContainer@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEA_N@Z
    long IsCallFromVailContainer(IUnknown *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallerMUMA@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEA_N@Z
    long IsCallerMUMA(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessAppContainer@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@PEA_N@Z
    long IsCallingProcessAppContainer(IUnknown *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultAccountRequest@TokenBroker@Authentication@Security@Internal@Windows@@YA_NPEAUIWebTokenRequest@Core@Web@235@@Z
    bool IsDefaultAccountRequest(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultAccountRequestPropertyMarker@TokenBroker@Authentication@Security@Internal@Windows@@YA_NPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    bool IsDefaultAccountRequestPropertyMarker(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTokenForDefaultAccount@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAXHHPEAH@Z
    long IsTokenForDefaultAccount(void *, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVailContainer@TokenBroker@Authentication@Security@Internal@Windows@@YA_NXZ
    bool IsVailContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReFindAccountWithContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebAccount@Credentials@35@PEAUIWebAccountProvider@735@W4AccountLookupContext@12345@PEAUHSTRING__@@PEAPEAU6735@@Z
    long ReFindAccountWithContext(::Windows::Security::Credentials::IWebAccount *, ::Windows::Security::Credentials::IWebAccountProvider *, int, HSTRING__*, ::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReFindAccountsWithContext@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@5@PEAUIWebAccountProvider@Credentials@35@W4AccountLookupContext@12345@PEAUHSTRING__@@PEAPEAU6785@@Z
    long ReFindAccountsWithContext(WindissectOpaque *, ::Windows::Security::Credentials::IWebAccountProvider *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePropertySet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@5@PEAPEAUIBuffer@Streams@Storage@5@@Z
    long SerializePropertySet(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeWebTokenRequestToValueSet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@PEAPEAUIPropertySet@Collections@Foundation@5@@Z
    long SerializeWebTokenRequestToValueSet(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeWebTokenRequsetResultOperationParamsToValueSet@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@5@PEAPEAUIPropertySet@Collections@Foundation@5@@Z
    long SerializeWebTokenRequsetResultOperationParamsToValueSet(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeWebTokenResponsesWithStatus@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAU?$IVectorView@PEAVWebTokenResponse@Core@Web@Authentication@Security@Windows@@@Collections@Foundation@5@PEAUIWebTokenRequest@Core@Web@235@W4AccountLookupContext@12345@PEAUHSTRING__@@W4WebTokenRequestStatus@Core@Web@235@UDateTime@85@PEAUIWebProviderError@Core@Web@235@PEAPEAUIBuffer@Streams@Storage@5@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@785@@Z
    long SerializeWebTokenResponsesWithStatus(WindissectOpaque *, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, int, HSTRING__*, int, WindissectOpaque, ::Windows::Security::Authentication::Web::Core::IWebProviderError *, ::Windows::Storage::Streams::IBuffer * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultAccountRequest@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIWebTokenRequest@Core@Web@235@@Z
    long SetDefaultAccountRequest(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterfaceSecurity@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIUnknown@@_N@Z
    long SetInterfaceSecurity(IUnknown *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateContainerHwndToHostHwnd@TokenBroker@Authentication@Security@Internal@Windows@@YAJU_GUID@@PEAI@Z
    long TranslateContainerHwndToHostHwnd(_GUID, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAgentIdFromToken@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAXAEAVString@45@@Z
    long TryGetAgentIdFromToken(void *, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBufferToStreamReference@TokenBroker@Authentication@Security@Internal@Windows@@YAJPEAUIBuffer@Streams@Storage@5@PEAUIRandomAccessStreamReference@785@@Z
    long WriteBufferToStreamReference(::Windows::Storage::Streams::IBuffer *, ::Windows::Storage::Streams::IRandomAccessStreamReference *);
};
} // namespace Windows::Internal::Security::Authentication
