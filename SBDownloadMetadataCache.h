/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableSet;

@interface SBDownloadMetadataCache : _ABAddressBookCopyLocalizedLabel
{
    NSMutableSet *_fetchedDownloads;
}

+ (id)sharedInstance;
- (void)downloadRemoved:(id)fp8;
- (BOOL)artworkIsPrerenderedForDownload:(id)fp8;
- (id)applicationIdentifierForDownload:(id)fp8;
- (id)bundleIdentifierForDownload:(id)fp8;
- (id)titleForDownload:(id)fp8;
- (id)softwareTypeForDownload:(id)fp8;
- (void)_ensureMetadataCachedForDownload:(id)fp8;
- (id)init;

@end

