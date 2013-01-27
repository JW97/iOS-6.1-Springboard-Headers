/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBVoiceControlController : _ABAddressBookCopyLocalizedLabel
{
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
}

+ (id)sharedInstance;
- (void)_updateNextRecognitionAudioInputPaths:(id)fp8;
- (void)bluetoothDeviceEndedVoiceControl:(id)fp8;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)fp8;
- (void)_spokenLanguageDidChange:(id)fp8;
- (void)_assistantActivationSettingsDidChange:(id)fp8;
- (void)headsetAvailabilityChanged;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (BOOL)handleHeadsetButtonUp;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned int)fp8;
- (void)_cancelDelayedHeadsetAction;
- (void)_prepareDelayedHeadsetAction;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_performDelayedHeadsetActionForAssistant;
- (BOOL)handleHomeButtonHeld;
- (void)preheatForMenuButtonWithFireDate:(id)fp8;
- (void)configureVoiceControl;
- (id)init;

@end

