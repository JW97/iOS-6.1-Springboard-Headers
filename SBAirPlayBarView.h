/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBAppSwitcherVolumeSlider, UIButton, UIView;

@interface SBAirPlayBarView : _ABAddressBookCopyLocalizedLabel
{
    UIView *_speakerIcon;
    UIButton *_airPlayButton;
    SBAppSwitcherVolumeSlider *_volumeSlider;
    BOOL _airPlayEnabled;
}

- (id)airPlayButton;
- (id)volumeSlider;
- (void)setAirPlayEnabled:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setAirPlayEnabled:(BOOL)fp8;
- (BOOL)isAirPlayEnabled;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

