/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "NSCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface SBRemoteNotificationClient : _ABAddressBookCopyLocalizedLabel <NSCoding>
{
    NSString *_bundleIdentifier;
    NSString *_environment;
    unsigned int _appEnabledTypes;
    unsigned int _settingsEnabledTypes;
    unsigned int _settingsPresentedTypes;
    NSData *_lastKnownDeviceToken;
    NSDate *_missingDate;
    int _dayOfLastContentPush;
    unsigned int _dailyCountOfContentPushes;
    BOOL _hasShownSystemwideEnableAlert;
    NSDictionary *_lastUserInfo;
}

- (void)setLastUserInfo:(id)fp8;
- (id)lastUserInfo;
- (void)setHasShownSystemwideEnableAlert:(BOOL)fp8;
- (BOOL)hasShownSystemwideEnableAlert;
- (void)setDailyCountOfContentPushes:(unsigned int)fp8;
- (unsigned int)dailyCountOfContentPushes;
- (void)setDayOfLastContentPush:(int)fp8;
- (int)dayOfLastContentPush;
- (void)setMissingDate:(id)fp8;
- (id)missingDate;
- (void)setLastKnownDeviceToken:(id)fp8;
- (id)lastKnownDeviceToken;
- (void)setSettingsPresentedTypes:(unsigned int)fp8;
- (unsigned int)settingsPresentedTypes;
- (void)setSettingsEnabledTypes:(unsigned int)fp8;
- (unsigned int)settingsEnabledTypes;
- (void)setAppEnabledTypes:(unsigned int)fp8;
- (unsigned int)appEnabledTypes;
- (void)setEnvironment:(id)fp8;
- (id)environment;
- (id)bundleIdentifier;
- (unsigned int)effectivelyEnabledTypes;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)fp8;

@end

