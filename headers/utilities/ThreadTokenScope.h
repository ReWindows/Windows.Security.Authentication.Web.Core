#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 2 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class ThreadTokenScope {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainedImpersonate@ThreadTokenScope@Web@Authentication@Security@Internal@Windows@@QEAAJ_K@Z
    long ConstrainedImpersonate(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadTokenScope@Web@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~ThreadTokenScope();
};
} // namespace Windows::Internal::Security::Authentication::Web
