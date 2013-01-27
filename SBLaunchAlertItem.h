/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, SBApplication;

@interface SBLaunchAlertItem : _ABAddressBookCopyLocalizedLabel
{
    SBApplication *_associatedDisplay;
    int _type;
    NSString *_bundleID;
    BOOL _isDataAlert;
    BOOL _usesCellNetwork;
}

- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (id)alertSheet;
- (id)_customAirplaneModeAlertPrompt;
- (BOOL)dismissOnLock;
- (void)_displayDeactivated:(id)fp8;
- (void)setAssociatedWithDisplay:(id)fp8;
- (void)dealloc;
- (id)initWithLaunchAlertType:(int)fp8 dataAlert:(BOOL)fp12 usesCellNetwork:(BOOL)fp16 bundleID:(id)fp20;

@end

