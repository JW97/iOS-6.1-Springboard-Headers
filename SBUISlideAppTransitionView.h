/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIFullscreenAnimationView.h"

@class UIView;

@interface SBUISlideAppTransitionView : SBUIFullscreenAnimationView
{
    UIView *_fromView;
    UIView *_toView;
}

- (void)appSlideAnimationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)endTransition;
- (void)beginTransition;
- (void)beginTransitionWithDuration:(double)fp8 delay:(double)fp16;
- (void)setToView:(id)fp8;
- (void)setFromView:(id)fp8;
- (void)dealloc;

@end

