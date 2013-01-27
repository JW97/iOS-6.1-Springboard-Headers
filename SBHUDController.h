/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBHUDView, UIView, UIWindow;

@interface SBHUDController : _ABAddressBookCopyLocalizedLabel
{
    UIWindow *_hudWindow;
    UIView *_hudContentView;
    SBHUDView *_hudView;
    int _orientation;
    BOOL _hudVisibleOrFading;
}

+ (id)sharedHUDController;
- (void)hideHUDView;
- (id)visibleOrFadingHUDView;
- (id)visibleHUDView;
- (void)presentHUDView:(id)fp8 autoDismissWithDelay:(double)fp12;
- (void)presentHUDView:(id)fp8;
- (void)_orderWindowOut:(id)fp8;
- (void)animationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)_tearDown;
- (void)_createUI;
- (void)reorientHUDIfNeeded:(BOOL)fp8;
- (void)_recenterHUDView;
- (void)dealloc;

@end

