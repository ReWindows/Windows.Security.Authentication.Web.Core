#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 45 member(s).
namespace Windows::Internal {
class StringReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareOrdinal@StringReference@Internal@Windows@@QEBAHAEBVString@23@@Z
    int CompareOrdinal(::Windows::Internal::String const &) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z
    void _ConstructorHelper(unsigned short const *);
};
} // namespace Windows::Internal
