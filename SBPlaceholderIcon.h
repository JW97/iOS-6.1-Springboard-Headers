/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIcon.h"

@interface SBPlaceholderIcon : SBIcon
{
    id _nodeIdentifier;
    SBIcon *_icon;
}

+ (id)emptyPlaceholder;
+ (void)setGrabbedIcon:(id)fp8;
+ (id)grabbedIconPlaceholder;
+ (id)placeholderForIcon:(id)fp8;
+ (id)placeholderNodeIdentifierForIcon:(id)fp8;
- (BOOL)isPlaceholderForIcon:(id)fp8;
- (BOOL)isEmptyPlaceholder;
- (BOOL)isGrabbedIconPlaceholder;
- (BOOL)isPlaceholder;
- (BOOL)shouldCacheImageForFormat:(int)fp8;
- (id)generateIconImage:(int)fp8;
- (id)automationID;
- (BOOL)matchesRepresentation:(id)fp8;
- (id)representation;
- (id)nodeIdentifier;
- (void)dealloc;
- (id)_initWithNodeIdentifier:(id)fp8 icon:(id)fp12;

@end

