/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class BBBulletin, BBObserver, NSDate, NSMutableArray, NSString, UIImage;

@interface SBAwayBulletinListItem : _ABAddressBookCopyLocalizedLabel
{
    NSMutableArray *_bulletins;
    int _personID;
    NSString *_contactInfo;
    BBObserver *_observer;
    BBBulletin *_activeBulletin;
    NSDate *_sortDate;
    NSDate *_displayDate;
    NSString *_message;
    UIImage *_listItemImage;
}

- (BOOL)isVIP;
- (BOOL)canCoalesceWithBulletin:(id)fp8;
- (BOOL)hasSamePersonAsBulletin:(id)fp8;
- (id)attachmentText;
- (id)attachmentImageForKey:(id)fp8;
- (id)iconImage;
- (id)description;
- (unsigned int)maxMessageLines;
- (id)subtitle;
- (id)date;
- (id)title;
- (id)message;
- (id)activeBulletin;
- (id)bulletins;
- (id)sortDate;
- (BOOL)containsBulletinWithID:(id)fp8;
- (void)modifyBulletin:(id)fp8;
- (void)removeBulletin:(id)fp8;
- (void)addBulletin:(id)fp8;
- (void)_update;
- (id)bulletinWithID:(id)fp8;
- (void)dealloc;
- (id)initWithBulletin:(id)fp8 andObserver:(id)fp12;

@end

