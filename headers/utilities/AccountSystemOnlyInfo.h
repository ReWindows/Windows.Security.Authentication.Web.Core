#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
class AccountSystemOnlyInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AccountSystemOnlyInfo@@QEAA@XZ
    AccountSystemOnlyInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyToWriter@AccountSystemOnlyInfo@@QEAAJAEAVJsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@@Z
    long ApplyToWriter(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromAccount@AccountSystemOnlyInfo@@QEAAJPEAUIWebAccount@Credentials@Security@Windows@@PEAUHSTRING__@@@Z
    long InitializeFromAccount(::Windows::Security::Credentials::IWebAccount *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromAccountId@AccountSystemOnlyInfo@@QEAAJAEAVStoredObjectId@TokenBroker@Authentication@Security@Internal@Windows@@PEAUHSTRING__@@@Z
    long InitializeFromAccountId(WindissectOpaque &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromReader@AccountSystemOnlyInfo@@QEAAJAEAVJsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@@Z
    long InitializeFromReader(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountSystemOnlyInfo@@QEAA@XZ
    ~AccountSystemOnlyInfo();
};
