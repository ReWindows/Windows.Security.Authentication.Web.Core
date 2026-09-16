#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 11 member(s).
namespace Windows::Internal::Security::Authentication {
class Web {
public:
    class ApplicationCallbackUri;
    class AsyncImpersonator;
    class CGetApplicationTokenBindingKeyIdOperation;
    class CGetApplicationTokenBindingKeyOperation;
    class CHttpCookieRequestResult;
    class CHttpCookieRequestResultOperation;
    class CWebAuthenticationCoreInternalManager;
    class HttpCookieRequestResultParams;
    class SuspendImpersonationScope;
    class ThreadTokenScope;
    class WatchdogLogger;
    class detail;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedEntryAction@Web@Authentication@Security@Internal@Windows@@YAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@5@0@Z
    long InvalidateCachedEntryAction(HSTRING__*, ::Windows::Storage::Streams::IBuffer *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunningAsSystemOrService@Web@Authentication@Security@Internal@Windows@@YA_NPEAX@Z
    bool RunningAsSystemOrService(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunningAsVirtualAccount@Web@Authentication@Security@Internal@Windows@@YA_NPEAX@Z
    bool RunningAsVirtualAccount(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeTokenBrokerAppEvent@Web@Authentication@Security@Internal@Windows@@YAJP6AJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z2PEAPEAU_WNF_USER_SUBSCRIPTION@@@Z
    long SubscribeTokenBrokerAppEvent(long ( *)(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long), void *, _WNF_USER_SUBSCRIPTION * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CaptureThreadToken@Web@Authentication@Security@Internal@Windows@@YAJPEAPEAX@Z
    long _CaptureThreadToken(void * *);
};
} // namespace Windows::Internal::Security::Authentication
