/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSTimer, UIImageView;

@interface SBNewsstandCardView : _ABAddressBookCopyLocalizedLabel
{
    BOOL _skewed;
    BOOL _highlighted;
    BOOL _touchOnCard;
    UIImageView *_cardView;
    UIImageView *_textView;
    UIImageView *_overlayView;
    NSTimer *_delayedUnhighlightTimer;
}

+ (void)setupCache;
+ (void)_fetchAndCacheImagesIfNecessary:(id *)fp8 outCardTextImage:(id *)fp12;
+ (void)_fetchAndCacheImagesIfNecessary;
+ (void)_removeCachedLocalizedImages;
+ (void)load;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)setHighlighted:(BOOL)fp8 delayUnhighlight:(BOOL)fp12;
- (void)_delayedUnhighlight;
- (id)overlayImage;
- (float)shadowPadding;
- (void)setSkewed:(BOOL)fp8;
- (struct CATransform3D)skewTransform;
- (void)dealloc;
- (id)init;

@end

