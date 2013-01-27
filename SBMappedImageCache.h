/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SBMappedImageCache : _ABAddressBookCopyLocalizedLabel
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSMutableDictionary *_images;
}

+ (id)imageNamed:(id)fp8 options:(int)fp12;
+ (id)imageNamed:(id)fp8;
+ (id)sessionCache;
+ (id)persistentCache;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)fp8;
- (void)warmupImageForKey:(id)fp8;
- (void)setImage:(id)fp8 forKey:(id)fp12;
- (id)imageForKey:(id)fp8 generateImageWithBlockIfNecessary:(id)fp(null);
- (id)imageForKey:(id)fp8 options:(int)fp12 generateImageWithBlockIfNecessary:(id)fp(null);
- (id)imageForKey:(id)fp8 options:(int)fp12;
- (id)imageForKey:(id)fp8;
- (void)dealloc;
- (id)initWithPath:(id)fp8;

@end

