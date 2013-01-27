/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SUManagerClientDelegate-Protocol.h"
#import "SUNetworkObserver-Protocol.h"

@class SUDownload, SUManagerClient;

@interface SBSoftwareUpdateController : _ABAddressBookCopyLocalizedLabel <SUManagerClientDelegate, SUNetworkObserver>
{
    SUManagerClient *_client;
    SUDownload *_updateToInstall;
    int _currentNetworkType;
    int _iCloudRestoreToken;
    BOOL _showOrScheduleForcedInstallAlertAfterNextUnlock;
    BOOL _scheduleForcedInstallAlertAfterNextUnlock;
    BOOL _scheduleForcedInstallAlertWhenAble;
    BOOL _settingsResetPrefsBadgedFlag;
}

+ (id)stringFromReasons:(int)fp8;
+ (id)sharedInstance;
- (void)_toggleSettingsBadge:(BOOL)fp8;
- (BOOL)_isSettingsBadgedForSoftwareUpdate;
- (void)_clearLegacyBadgeIfNecessary:(id)fp8;
- (void)_migrateForNewOSVersionIfNecessary;
- (void)_saveLastKnownVersionPreference:(id)fp8;
- (id)_stringForCurrentVersionPreference;
- (void)_savePreferencesBadgeFlag:(id)fp8;
- (void)_autoDownloadUnknownToUserFailedForDescriptor:(id)fp8 error:(id)fp12;
- (void)_resetState;
- (BOOL)_isSettingsActive;
- (void)_handleInstallError:(id)fp8;
- (BOOL)_forceInstallAfterDownload;
- (void)_scheduleForcedInstallRepeatAlert:(double)fp8;
- (void)_showForcedInstallAlert;
- (void)_isUpdateInstallable:(id)fp(null);
- (void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)fp8;
- (void)_showOrScheduleNextForcedInstallAlert;
- (void)_resetAndCancelExistingScheduledForcedInstallAlerts;
- (void)_setUpdateToInstall:(id)fp8;
- (void)_registerForInstallRelatedNotifications;
- (void)_unregisterForInstallRelatedNotifications;
- (void)client:(id)fp8 installDidFinish:(id)fp12;
- (void)client:(id)fp8 installDidFail:(id)fp12 withError:(id)fp16;
- (void)client:(id)fp8 installDidStart:(id)fp12;
- (void)client:(id)fp8 downloadDidFinish:(id)fp12;
- (void)client:(id)fp8 downloadDidFail:(id)fp12 withError:(id)fp16;
- (void)client:(id)fp8 downloadDidStart:(id)fp12;
- (void)client:(id)fp8 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)fp12 withError:(id)fp16;
- (void)client:(id)fp8 downloadWasInvalidatedForNewUpdateAvailable:(id)fp12;
- (void)_iTunesRestoreStateChanged:(id)fp8;
- (void)_iCloudStatusChanged;
- (void)_lockStateChanged:(id)fp8;
- (void)_callCountChanged:(id)fp8;
- (void)_syncDidEnd:(id)fp8;
- (void)_syncWillStart:(id)fp8;
- (void)_completeMigrationForSettingsReset;
- (void)_prepareMigrationForSettingsReset;
- (void)delayForcedInstallWithDefaultDurationAfterNextUnlock;
- (void)delayForcedInstallWithDefaultDurationFromNow;
- (void)delayForcedInstallUntilAble;
- (void)installUpdate;
- (void)isDownloading:(id)fp(null);
- (void)dealloc;
- (id)init;

@end

