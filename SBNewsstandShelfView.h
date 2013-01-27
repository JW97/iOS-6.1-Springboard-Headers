/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class UIImageView, UILabel;

@interface SBNewsstandShelfView : _ABAddressBookCopyLocalizedLabel
{
    UIImageView *_body;
    UIImageView *_leftEdge;
    UIImageView *_rightEdge;
    UIImageView *_shadowLeft;
    UIImageView *_shadowMiddle;
    UIImageView *_shadowRight;
    int _orientation;
    unsigned int _shelfIndex;
    UILabel *_label;
}

+ (id)shelf;
+ (id)reuseIdentifier;
+ (float)shelfItemBaselineOffset;
+ (float)shelfEdgeHeight;
+ (float)shelfHeight;
- (void)configureForOrientation:(int)fp8 shelfIndex:(unsigned int)fp12;
- (unsigned int)shelfIndex;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

