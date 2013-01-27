/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAwayListItemCell.h"

@class NSArray;

@interface SBAwaySystemAlertCell : SBAwayListItemCell
{
    NSArray *_buttons;
    id <SBAwayListCellButtonHandler> _buttonHandler;
    BOOL _horizontalButtonLayout;
}

+ (float)_buttonVerticalInset;
+ (float)_buttonHorizontalInset;
+ (id)_buttonFont;
+ (float)_buttonWidthForText:(id)fp8;
+ (id)_buttonPressedImage;
+ (id)_buttonBackgroundImage;
+ (id)_alarmButtonPressedImage;
+ (id)_alarmButtonBackgroundImage;
+ (float)rowHeightForTitle:(id)fp8 message:(id)fp12 rowWidth:(float)fp16 buttonLabels:(id)fp20;
- (void)layoutSubviews;
- (float)_getMaxButtonWidth;
- (struct CGRect)_cellContentViewFrame;
- (void)setButtonLabels:(id)fp8 handler:(id)fp12 isAlarm:(BOOL)fp16;
- (void)_createContentView;
- (void)_forwardButtonPressToHandler:(id)fp8;
- (void)dealloc;

@end

