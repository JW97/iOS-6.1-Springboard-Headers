/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIconModelPropertyListFileStore.h"

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore
{
}

+ (id)sharedInstance;
- (void)_deleteLegacyState;
- (id)loadDesiredIconState:(id *)fp8;
- (BOOL)saveDesiredIconState:(id)fp8 error:(id *)fp12;
- (BOOL)deleteDesiredIconState:(id *)fp8;
- (id)loadCurrentIconState:(id *)fp8;
- (id)init;

@end

