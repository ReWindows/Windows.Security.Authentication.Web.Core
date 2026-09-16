#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 2 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class SuspendImpersonationScope {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@SuspendImpersonationScope@Web@Authentication@Security@Internal@Windows@@QEAAJXZ
    long Suspend();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuspendImpersonationScope@Web@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~SuspendImpersonationScope();
};
} // namespace Windows::Internal::Security::Authentication::Web
