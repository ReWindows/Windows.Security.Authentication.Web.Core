#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 50 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAccountMonitor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAccountMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDefaultSignInAccountChanged@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJH@Z
    virtual long HandleDefaultSignInAccountChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAccountChanges@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long ProcessAccountChanges();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@QEAAJPEAU?$IIterable@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AccountPictureUpdated@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWebAccountMonitor@Core@Web@Authentication@Security@Windows@@PEAVWebAccountEventArgs@23456@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_AccountPictureUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DefaultSignInAccountChanged@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWebAccountMonitor@Core@Web@Authentication@Security@Windows@@PEAUIInspectable@@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_DefaultSignInAccountChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWebAccountMonitor@Core@Web@Authentication@Security@Windows@@PEAVWebAccountEventArgs@23456@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Updated@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWebAccountMonitor@Core@Web@Authentication@Security@Windows@@PEAVWebAccountEventArgs@23456@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_Updated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AccountPictureUpdated@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AccountPictureUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DefaultSignInAccountChanged@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DefaultSignInAccountChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Updated@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Updated(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeWebAccountPictureUpdatedHandlers@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@AEAAJPEAV?$AgileVector@PEAVWebAccount@Credentials@Security@Windows@@U?$DefaultEqualityPredicate@PEAVWebAccount@Credentials@Security@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVWebAccount@Credentials@Security@Windows@@@6784@$0A@@Internal@Collections@Foundation@6@@Z
    long InvokeWebAccountPictureUpdatedHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeWebAccountRemovedHandlers@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@AEAAJPEAV?$AgileVector@PEAVWebAccount@Credentials@Security@Windows@@U?$DefaultEqualityPredicate@PEAVWebAccount@Credentials@Security@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVWebAccount@Credentials@Security@Windows@@@6784@$0A@@Internal@Collections@Foundation@6@@Z
    long InvokeWebAccountRemovedHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeWebAccountUpdatedHandlers@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@AEAAJPEAV?$AgileVector@PEAVWebAccount@Credentials@Security@Windows@@U?$DefaultEqualityPredicate@PEAVWebAccount@Credentials@Security@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVWebAccount@Credentials@Security@Windows@@@6784@$0A@@Internal@Collections@Foundation@6@@Z
    long InvokeWebAccountUpdatedHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PsmStateChangeNotificationRoutine@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@CAXEPEAX0@Z
    static void PsmStateChangeNotificationRoutine(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfEventCallback@CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long WnfEventCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountMonitor@Core@Web@Authentication@Security@Windows@@EEAA@XZ
    virtual ~CWebAccountMonitor();
};
} // namespace Windows::Security::Authentication::Web::Core
