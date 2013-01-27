/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableArray, SBWorkspaceEvent;

@interface SBWorkspaceEventQueue : _ABAddressBookCopyLocalizedLabel
{
    unsigned int _lockCount;
    NSMutableArray *_eventQueue;
    SBWorkspaceEvent *_executingEvent;
}

+ (id)sharedInstance;
- (void)setExecutingEvent:(id)fp8;
- (id)executingEvent;
- (void)_bumpLockAssertionCount:(int)fp8;
- (void)_processNextEvent;
- (BOOL)hasEventWithName:(id)fp8;
- (BOOL)hasEventWithPrefix:(id)fp8;
- (void)cancelEventsWithName:(id)fp8;
- (BOOL)isLocked;
- (void)executeOrPrependEvents:(id)fp8;
- (void)executeOrPrependEvent:(id)fp8;
- (void)executeOrAppendEvent:(id)fp8;
- (void)_executeOrPendEvents:(id)fp8 position:(int)fp12;
- (id)description;
- (void)dealloc;
- (id)init;

@end

