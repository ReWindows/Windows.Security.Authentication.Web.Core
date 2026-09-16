#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderOperationReportSilentBase {
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderOperationReportSilentBase@Provider@Web@Authentication@Security@Windows@@IEAA@XZ
    CWebAccountProviderOperationReportSilentBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAction@CWebAccountProviderOperationReportSilentBase@Provider@Web@Authentication@Security@Windows@@IEAAJXZ
    long _CompleteAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteIBufferToBaseTrustAccessibleServer@CWebAccountProviderOperationReportSilentBase@Provider@Web@Authentication@Security@Windows@@IEAAJPEAUIBuffer@Streams@Storage@6@@Z
    long _WriteIBufferToBaseTrustAccessibleServer(::Windows::Storage::Streams::IBuffer *);
};
} // namespace Windows::Security::Authentication::Web::Provider
