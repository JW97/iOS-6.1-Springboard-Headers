/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : _ABAddressBookCopyLocalizedLabel
{
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (void)checkinValue:(id)fp8;
- (id)checkoutValueForKey:(id)fp8 creationBlock:(id)fp(null);
- (void)dealloc;
- (id)init;

@end

