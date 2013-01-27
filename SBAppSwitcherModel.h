/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableArray, NSTimer;

@interface SBAppSwitcherModel : _ABAddressBookCopyLocalizedLabel
{
    NSMutableArray *_recentDisplayIdentifiers;
    NSTimer *_saveTimer;
}

+ (id)sharedInstance;
- (id)snapshot;
- (void)appsRemoved:(id)fp8 added:(id)fp12;
- (id)identifiers;
- (unsigned int)count;
- (id)identifierAtIndex:(unsigned int)fp8;
- (id)appAtIndex:(unsigned int)fp8;
- (void)remove:(id)fp8;
- (void)addToFront:(id)fp8;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (void)_saveRecentsDelayed;
- (void)_invalidateSaveTimer;
- (void)dealloc;
- (id)init;

@end

