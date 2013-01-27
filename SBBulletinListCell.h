/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBBulletinLinenBackedCell.h"

@class SBBulletinCellContentView, UIImageView;

@interface SBBulletinListCell : SBBulletinLinenBackedCell
{
    UIImageView *_bulletinAccessoryView;
    UIImageView *_bottomCellSeparator;
    SBBulletinCellContentView *_cellContentView;
}

+ (float)heightForRowWithSubtitle:(id)fp8 imageHeight:(float)fp12;
+ (float)heightForRowWithSubtitle:(id)fp8 message:(id)fp12 maxLines:(unsigned int)fp16 width:(float)fp20;
- (void)layoutSubviews;
- (void)setCellSeparatorStyle:(int)fp8;
- (void)setBulletinAccessoryStyle:(int)fp8;
- (void)setAttachmentText:(id)fp8;
- (void)setAttachmentImageSize:(struct CGSize)fp8;
- (void)setAttachmentImage:(id)fp8;
- (void)setStartDate:(id)fp8 endDate:(id)fp12 timeZone:(id)fp16 allDay:(BOOL)fp20 formatStyle:(int)fp24;
- (void)setMessage:(id)fp8;
- (void)setSubtitle:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)setMaxMessageLines:(unsigned int)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLinenView:(id)fp8 reuseIdentifier:(id)fp12;

@end

