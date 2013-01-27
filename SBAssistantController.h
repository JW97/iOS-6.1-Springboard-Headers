/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIPluginHost.h"

#import "SBHomeCentricPopoverControllerDelegate-Protocol.h"
#import "SBShowcaseViewControllerProtocol-Protocol.h"

@class NSString, SBDeviceLockDisableAssertion, SBHomeCentricPopoverController, SBShowcaseController;

@interface SBAssistantController : SBUIPluginHost <SBHomeCentricPopoverControllerDelegate, SBShowcaseViewControllerProtocol>
{
    SBHomeCentricPopoverController *_homeCentricPopover;
    NSString *_popoverAppDisplayIDBeingHosted;
    SBShowcaseController *_showcase;
    int _revealMode;
    BOOL _unlockedDevice;
    BOOL _isDismissing;
    int _activationEvent;
    SBDeviceLockDisableAssertion *_disableAssertion;
}

+ (BOOL)_runActivateAssistantTest;
+ (BOOL)isAssistantRunningHidden;
+ (BOOL)isAssistantVisible;
+ (BOOL)shouldEnterAssistant;
+ (BOOL)supportedAndEnabled;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (int)revealMode;
- (void)setShowcase:(id)fp8;
- (id)showcase;
- (void)setDismissing:(BOOL)fp8;
- (BOOL)isDismissing;
- (void)uiPlugin:(id)fp8 ignoresKeyboardAvoidance:(BOOL)fp12;
- (void)uiPlugin:(id)fp8 forceUpdateToInterfaceOrientation:(int)fp12 animated:(BOOL)fp16;
- (void)uiPlugin:(id)fp8 isNowRunning:(BOOL)fp12;
- (void)uiPluginUserEventOccurred:(id)fp8;
- (BOOL)uiPlugin:(id)fp8 openURL:(id)fp12;
- (BOOL)uiPlugin:(id)fp8 launchApplicationWithBundleID:(id)fp12 openURL:(id)fp16;
- (BOOL)uiPluginAttemptDeviceUnlock:(id)fp8 withPassword:(id)fp12 lockViewOwner:(id)fp16;
- (void)uiPluginWantsSizeUpdate:(id)fp8 revealMode:(int)fp12 withBlock:(id)fp(null);
- (BOOL)uiPluginWantsActivation:(id)fp8 forEvent:(int)fp12 revealMode:(int)fp16 completion:(id)fp(null);
- (void)_presentPopover:(id)fp8 revealMode:(int)fp12 completion:(id)fp(null);
- (int)_showcaseRevealModeForPluginRevealMode:(int)fp8;
- (void)revealModeWillChange:(int)fp8;
- (void)_dismissUIPlugin:(id)fp8 animated:(BOOL)fp12;
- (void)dismissPluginForEvent:(int)fp8;
- (BOOL)pluginSuppressesNotifications;
- (BOOL)pluginWantsScreenDimInterval:(double *)fp8;
- (BOOL)pluginWantsInterfaceOrientation:(int *)fp8;
- (void)preparePluginForActivationEvent:(int)fp8 afterInterval:(double)fp12;
- (BOOL)pluginWantsActivationEvent:(int)fp8 interval:(double *)fp12;
- (void)homeCentricPopoverDidDismissView:(id)fp8;
- (void)homeCentricPopoverWillDismissView:(id)fp8 animated:(BOOL)fp12;
- (void)homeCentricPopoverDidPresentView:(id)fp8;
- (void)homeCentricPopoverWillPresentView:(id)fp8 animated:(BOOL)fp12;
- (void)_cleanupContextHosting;
- (BOOL)activateIgnoringTouches;
- (float)revealAmountForMode:(int)fp8;
- (float)bottomBarHeight;
- (BOOL)shouldShowLockStatusBarTime;
- (void)setRevealMode:(int)fp8;
- (BOOL)_isPluginLoaded;
- (void)_loadPlugin;
- (BOOL)unlockedDevice;
- (void)setUnlockedDevice:(BOOL)fp8;
- (void)dismissAssistantForAlertActivation:(id)fp8;
- (void)dismissAssistantWithFadeOfDuration:(double)fp8;
- (void)dismissAssistantWithFade;
- (void)dismissAssistant;
- (void)_notePluginVisibilityDidChange;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)dealloc;
- (id)init;

@end

