#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Internal::Security {
class CXProcByValueMarshal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAU5@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CXProcByValueMarshal@Security@Internal@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
};
} // namespace Windows::Internal::Security
