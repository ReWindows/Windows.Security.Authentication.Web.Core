#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderTriggerDetailsFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderTriggerDetailsFactory@Provider@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountProviderTriggerDetailsFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEventDetailsInstance@CWebAccountProviderTriggerDetailsFactory@Provider@Web@Authentication@Security@Windows@@UEAAJKPEAEPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateEventDetailsInstance(unsigned long, unsigned char *, IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CWebAccountProviderTriggerDetailsFactory@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
};
} // namespace Windows::Security::Authentication::Web::Provider
