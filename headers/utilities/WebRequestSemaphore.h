#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
class WebRequestSemaphore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WebRequestSemaphore@@QEAA_NPEA_N@Z
    bool Create(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@WebRequestSemaphore@@QEAA_NXZ
    bool Open();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WebRequestSemaphore@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait@WebRequestSemaphore@@QEAAXXZ
    void Wait();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebRequestSemaphore@@QEAA@PEAUIWebTokenRequest@Core@Web@Authentication@Security@Windows@@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@PEAUHSTRING__@@PEBG@Z
    WebRequestSemaphore(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, HSTRING__*, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebRequestSemaphore@@QEAA@XZ
    ~WebRequestSemaphore();
};
