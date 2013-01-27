/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBCountedMapValue-Protocol.h"

@class NSString;

@interface SBIconAccessoryImage : _ABAddressBookCopyLocalizedLabel <SBCountedMapValue>
{
    NSString *_text;
}

+ (void)checkinAccessoryImage:(id)fp8;
+ (id)checkoutAccessoryImageForIcon:(id)fp8 location:(int)fp12;
+ (Class)_imageClassForIcon:(id)fp8 location:(int)fp12;
+ (id)_accessoryImageCountedMap;
+ (id)textForCountedMapKey:(id)fp8;
+ (id)countedMapKeyForText:(id)fp8;
+ (id)creationBlockForText:(SEL)fp4;
- (id)text;
- (struct CGRect)accessoryFrameForIconBounds:(struct CGRect)fp8;
- (id)countedMapKey;

@end

