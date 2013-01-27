/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIcon.h"

#import "SBIconIndexNodeObserver-Protocol.h"
#import "SBIconObserver-Protocol.h"

@class NSHashTable, NSMutableSet, SBFolder;

@interface SBFolderIcon : SBIcon <SBIconObserver, SBIconIndexNodeObserver>
{
    SBFolder *_folder;
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    float _progress;
}

+ (Class)_iconGridImageClass;
+ (unsigned int)_maxIconsInGridImage;
- (id)folder;
- (BOOL)isFolderIcon;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)downloadingIconStatusDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (id)miniGridCellImageForIcon:(id)arg1;
- (id)gridImageWithSkipping:(BOOL)arg1;
- (id)_miniIconGridWithSkipping:(BOOL)arg1;
- (unsigned int)gridCellIndexForIconIndex:(unsigned int)arg1 withSkipping:(BOOL)arg2;
- (BOOL)gridImageShouldSkipIcons;
- (struct _NSRange)_gridImageSkippedIconsRange;
- (void)_containedIconImageChanged:(id)arg1;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (void)updateProgress;
@property(readonly) float progress;
- (void)_updateProgressBar;
- (void)noteCompletedDownloadIdentifier:(id)arg1;
- (void)_updateBadgeValue;
- (void)updateLabel;
- (void)launch;
- (id)description;
- (void)localeChanged;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)displayName;
- (id)iconOverlayImageForLocation:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)dealloc;
- (id)initWithFolder:(id)arg1;

@end

