#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class StoredObjectId {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseHexByteString@StoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAPEBG@Z
    long GetBaseHexByteString(unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromBytes@StoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAEK@Z
    long InitializeFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromStringId@StoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEBG@Z
    long InitializeFromStringId(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~StoredObjectId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@StoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@AEAAXXZ
    void InternalRelease();
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker
