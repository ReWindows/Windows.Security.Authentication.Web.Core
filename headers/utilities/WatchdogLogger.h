#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 3 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class WatchdogLogger {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WatchdogLogger@Web@Authentication@Security@Internal@Windows@@QEAA@_JPEBU_GUID@@@Z
    WatchdogLogger(int64_t, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WatchdogLoggerCallback@WatchdogLogger@Web@Authentication@Security@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void WatchdogLoggerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WatchdogLogger@Web@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~WatchdogLogger();
};
} // namespace Windows::Internal::Security::Authentication::Web
