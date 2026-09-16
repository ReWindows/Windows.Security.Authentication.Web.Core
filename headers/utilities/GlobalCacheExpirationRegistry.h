#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 9 member(s).
class GlobalCacheExpirationRegistry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@GlobalCacheExpirationRegistry@@SAAEAV1@PEBG@Z
    static GlobalCacheExpirationRegistry & GetInstance(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderCacheExpiration@GlobalCacheExpirationRegistry@@QEAA_JAEBVString@Internal@Windows@@AEA_N@Z
    int64_t GetProviderCacheExpiration(::Windows::Internal::String const &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GlobalCacheExpirationRegistry@@QEAA@PEBG@Z
    GlobalCacheExpirationRegistry(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntryValid@GlobalCacheExpirationRegistry@@QEAAJAEBVString@Internal@Windows@@_JAEA_N@Z
    long IsEntryValid(::Windows::Internal::String const &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCacheExpirationFromRegistry@GlobalCacheExpirationRegistry@@QEAAJAEBVString@Internal@Windows@@AEA_J@Z
    long ReadCacheExpirationFromRegistry(::Windows::Internal::String const &, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterListener@GlobalCacheExpirationRegistry@@QEAAJXZ
    long RegisterListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterListener@GlobalCacheExpirationRegistry@@QEAAJXZ
    long UnregisterListener();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalCacheExpirationRegistry@@QEAA@XZ
    ~GlobalCacheExpirationRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@GlobalCacheExpirationRegistry@@AEAAJXZ
    long ClearCache();
};
