/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBDefaultDateLabel.h"

#import "SBRelativeDateTimerDelegate-Protocol.h"

@class SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate>
{
    SBRelativeDateTimer *_relativeDateTimer;
    unsigned int _value;
    int _resolution;
    int _comparedToNow;
}

- (void)timerFiredWithValue:(unsigned int)fp8 forResolution:(int)fp12 comparedToNow:(int)fp16;
- (id)constructLabelString;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setTimeZoneRelativeStartDate:(id)fp8 absoluteStartDate:(id)fp12;

@end

