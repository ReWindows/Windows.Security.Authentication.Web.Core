#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 11 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderOperationReportBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderErrorCode@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAK@Z
    virtual long GetProviderErrorCode(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderErrorMessage@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAG@Z
    virtual long GetProviderErrorMessage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderErrorProperties@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetProviderErrorProperties(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbnormalError@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long IsAbnormalError(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompleted@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long IsCompleted(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProviderError@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long IsProviderError(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUIRequired@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long IsUIRequired(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserCanceled@CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long IsUserCanceled(unsigned char *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderOperationReportBase@Provider@Web@Authentication@Security@Windows@@MEAA@XZ
    virtual ~CWebAccountProviderOperationReportBase();
};
} // namespace Windows::Security::Authentication::Web::Provider
