/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBHandMotionExtractor : NSObject
{
    CDStruct_812d5f7b _pixelDeltas;
    CDStruct_812d5f7b _smoothedDeltas;
    CDStruct_812d5f7b _allPixelDeltas;
    float _averageTranslation;
    float _farthestFingerSeparation;
    struct CGPoint _movementVelocityInPointsPerSecond;
}

@property(readonly, nonatomic) struct CGPoint movementVelocityInPointsPerSecond; // @synthesize movementVelocityInPointsPerSecond=_movementVelocityInPointsPerSecond;
@property(readonly, nonatomic) float farthestFingerSeparation; // @synthesize farthestFingerSeparation=_farthestFingerSeparation;
@property(readonly, nonatomic) float averageTranslation; // @synthesize averageTranslation=_averageTranslation;
@property(readonly, nonatomic) CDStruct_812d5f7b averageVelocities; // @synthesize averageVelocities=_smoothedDeltas;
@property(readonly, nonatomic) CDStruct_812d5f7b allPixelDeltas; // @synthesize allPixelDeltas=_allPixelDeltas;
@property(readonly, nonatomic) CDStruct_812d5f7b pixelDeltas; // @synthesize pixelDeltas=_pixelDeltas;
- (void)extractHandMotionForActiveTouches:(CDStruct_5fc3239e *)arg1 count:(unsigned int)arg2 centroid:(struct CGPoint)arg3;
- (void)clear;

@end

