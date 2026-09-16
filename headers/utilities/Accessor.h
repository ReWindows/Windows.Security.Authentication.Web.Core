#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace RoVariant {
class Accessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z
    long GetBoolean(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInspectable@Accessor@RoVariant@@QEBAJPEAPEAUIInspectable@@@Z
    long GetInspectable(IInspectable * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetString(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32@Accessor@RoVariant@@QEBAJPEAI@Z
    long GetUInt32(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64@Accessor@RoVariant@@QEBAJPEA_K@Z
    long GetUInt64(uint64_t *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPV@Accessor@RoVariant@@AEBAJXZ
    long VerifyPV() const;
};
} // namespace RoVariant
