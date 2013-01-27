/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlert.h"

@class NSString;

@interface SBCallFailureAlert : SBAlert
{
    long _causeCode;
    NSString *_address;
    int _uid;
    struct __CTCall *_call;
}

+ (void)test;
+ (void)activateForCall:(struct __CTCall *)fp8 causeCode:(long)fp12;
+ (BOOL)shouldDisplayForCauseCode:(long)fp8 modemCauseCode:(long)fp12;
- (void)setCallAddress:(id)fp8;
- (int)addressBookUID;
- (id)callAddress;
- (struct __CTCall *)call;
- (long)causeCode;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)activateWhenPossible;
- (void)dealloc;
- (id)initWithCauseCode:(long)fp8 call:(struct __CTCall *)fp12;

@end

