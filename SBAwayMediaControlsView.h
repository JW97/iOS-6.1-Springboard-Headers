/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "MPDetailSliderDelegate-Protocol.h"

@class MPVolumeView, NSTimer, SBDetailSlider, SBScrollingTitlesView, UIButton, UILabel;

@interface SBAwayMediaControlsView : _ABAddressBookCopyLocalizedLabel <MPDetailSliderDelegate>
{
    unsigned int _beganSeeking:1;
    int _seekingDirection;
    UIButton *_prevButton;
    UIButton *_nextButton;
    UIButton *_playPauseButton;
    UIButton *_repeatButton;
    UIButton *_shuffleButton;
    SBDetailSlider *_trackPositionSlider;
    BOOL _isScrubbingTrack;
    BOOL _wantsTicks;
    NSTimer *_tickTimer;
    SBScrollingTitlesView *_titlesView;
    UIButton *_jumpFastForwardButton;
    UILabel *_jumpFastForwardLabel;
    UIButton *_jumpRewindButton;
    UILabel *_jumpRewindLabel;
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_titleLabel;
    MPVolumeView *_volumeView;
    int _orientation;
}

- (int)orientation;
- (void)_updateInformation;
- (void)_stopTicking;
- (void)_startTickingWithUpdate:(BOOL)fp8;
- (void)_restartTickingAfterProgressScrub;
- (void)_stopTickTimer;
- (void)_startTickTimer;
- (void)_tickTimerHandler:(id)fp8;
- (id)_shuffleImageForMode:(int)fp8;
- (id)_repeatImageForMode:(int)fp8;
- (void)_routeButtonDidChangeNotification:(id)fp8;
- (id)_jumpFastForwardButton;
- (id)_jumpRewindButton;
- (id)_newNowPlayingLabelWithFont:(id)fp8 color:(id)fp12;
- (id)_newJumpLabel;
- (id)_newButtonWithImage:(id)fp8 action:(SEL)fp12;
- (void)detailSlider:(id)fp8 didChangeValue:(float)fp12;
- (void)detailSliderTrackingDidEnd:(id)fp8;
- (void)detailSliderTrackingDidCancel:(id)fp8;
- (void)detailSliderTrackingDidBegin:(id)fp8;
- (void)_resetProgressSlider;
- (void)_nowPlayingChanged:(id)fp8;
- (void)_unregisterForNowPlayingNotifications;
- (void)_registerForNowPlayingNotifications;
- (void)_shuffleButtonAction:(id)fp8;
- (void)_repeatButtonAction:(id)fp8;
- (void)_didPresentRoutePicker;
- (void)_volumeViewVisibilityChanged;
- (void)_volumeChange:(id)fp8;
- (void)_jumpFastForwardButtonAction:(id)fp8;
- (void)_jumpRewindButtonAction:(id)fp8;
- (void)_changeTrackButtonTouchPause:(id)fp8;
- (void)_changeTrackButtonEndSeek:(id)fp8;
- (void)_changeTrackButtonUp:(id)fp8;
- (void)_changeTrackButtonDown:(id)fp8;
- (void)_playPauseButtonAction:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)setArtist:(id)fp8;
- (void)setAlbum:(id)fp8;
- (id)title;
- (id)artist;
- (id)album;
- (void)removeFromSuperview;
- (void)setAlpha:(float)fp8;
- (void)layoutSubviews;
- (id)routeButtonVolumeView;
- (void)setOrientation:(int)fp8;
- (void)dealloc;
- (void)stopTickTimer;
- (BOOL)isMediaControlsShowingOverlays;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

