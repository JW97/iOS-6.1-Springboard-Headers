/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBAwayBulletinListViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BBObserver, NSArray, NSMutableArray, SBAwayBulletinCell, SBAwayBulletinListView, SBAwayListActionContext, UIView;

@interface SBAwayBulletinListController : NSObject <BBObserverDelegate, UITableViewDataSource, UITableViewDelegate, SBAwayBulletinListViewDelegate>
{
    BBObserver *_observer;
    NSMutableArray *_listItems;
    NSMutableArray *_realertTimers;
    SBAwayBulletinCell *_unlockingCell;
    BOOL _lockBarIsTracking;
    NSMutableArray *_trackingCells;
    SBAwayBulletinListView *_view;
    struct CGRect _viewRect;
    float _contentHeight;
    BOOL _dimmed;
    BOOL _presentingNewBulletin;
    BOOL _dimmingForLockButtonPress;
    BOOL _hibernating;
    BOOL _quietModeEnabled;
    BOOL _autoHidesNotifications;
    BOOL _autoHideTimerActive;
    BOOL _hasManuallyShownNotifications;
    struct CGAffineTransform _pinnedViewTransform;
    SBAwayListActionContext *_actionContext;
    NSMutableArray *_pendingSystemAlerts;
    id _itemToBlink;
    id _itemToFloat;
}

@property(readonly, nonatomic) BOOL quietModeEnabled; // @synthesize quietModeEnabled=_quietModeEnabled;
@property(nonatomic) BOOL autoHidesNotifications; // @synthesize autoHidesNotifications=_autoHidesNotifications;
@property(readonly, nonatomic) BOOL presentingNewBulletin; // @synthesize presentingNewBulletin=_presentingNewBulletin;
@property(readonly, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(readonly, nonatomic) BOOL lockBarIsTracking; // @synthesize lockBarIsTracking=_lockBarIsTracking;
@property(nonatomic) struct CGRect viewRect; // @synthesize viewRect=_viewRect;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)_rowHeightForItem:(id)arg1 floating:(BOOL)arg2;
- (void)_configureAndPositionView;
- (void)setPinnedViewTransform:(struct CGAffineTransform)arg1;
- (void)setViewHiddenForUnlock:(BOOL)arg1 force:(BOOL)arg2;
- (void)setViewHiddenForUnlock:(BOOL)arg1;
- (double)animationDurationForShowPasscodeUI:(BOOL)arg1 duration:(double)arg2;
- (double)animationDelayForShowPasscodeUI:(BOOL)arg1 duration:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 floating:(BOOL)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)pendOrDeactivateAlertItems:(BOOL)arg1;
- (void)deactivateAlertItem:(id)arg1;
- (void)activateAlertItem:(id)arg1 didUndimScreen:(BOOL)arg2;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (void)activateOrUpdateCardItem:(id)arg1 animated:(BOOL)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (id)_floatingItemToUseForNewItem:(id)arg1;
- (void)_updateModelAndTableViewForRemoval:(id)arg1 originalHeight:(float)arg2;
- (void)_updateModelAndTableViewForModification:(id)arg1 originalHeight:(float)arg2;
- (void)_updateModelAndTableViewForAddition:(id)arg1;
- (void)_updateModelAndTableViewForAddition:(id)arg1 animated:(BOOL)arg2;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)_scheduleRealerts:(id)arg1;
- (void)_killRealerts:(id)arg1;
- (void)_realertTimerFired:(id)arg1;
- (void)_alertForBulletin:(id)arg1;
- (BOOL)_shouldTreatBulletinAsInert:(id)arg1;
- (void)_forceTopBarShadowVisibilityUpdate;
- (BOOL)wantsToHideTopBarShadow;
- (void)resetLockBarIfUnlocking;
- (void)resetLockBarsIfTracking;
- (void)lockBarStoppedTrackingForCell:(id)arg1;
- (void)lockBarStartedTrackingForCell:(id)arg1;
- (BOOL)setUnlockingTableViewCell:(id)arg1;
- (void)_awayControllerRelocked:(id)arg1;
- (BOOL)usesFloatingPanelAndBlinkingItems;
- (void)_autoDismissTimerElapsed;
- (void)_startOrEndAutoDismissTimerIfNecessary;
- (void)_cancelAutoDismissTimer;
- (void)sliderGrabDidEnd;
- (void)sliderGrabWillEnd:(BOOL)arg1;
- (void)willSetViewStyle:(int)arg1;
- (BOOL)hasShownNotificationsManually;
- (BOOL)shouldAutoHideNotifications;
- (void)setTableItemToFloat:(id)arg1;
- (void)setTableItemToFloat:(id)arg1 force:(BOOL)arg2;
- (void)_animateResetConfigurationAndPositioning:(BOOL)arg1 clearingUnlockContext:(BOOL)arg2 clearsFloatingItem:(BOOL)arg3;
- (void)_animateResetConfigurationAndPositioning:(BOOL)arg1 clearingUnlockContext:(BOOL)arg2;
- (void)_animateResetConfigurationAndPositioning:(BOOL)arg1;
- (void)setTableItemToBlink:(id)arg1;
- (id)unlockActionContext;
- (id)visibleActionContext;
- (void)_sortListItems;
- (id)_systemAlertItem;
- (id)_listItemContainingCardItem:(id)arg1;
- (id)_listItemContainingBulletinID:(id)arg1;
- (id)_listItemForNewBulletin:(id)arg1;
- (void)showTestBulletin;
- (void)setUnlockActionContext:(id)arg1;
- (void)_autoHideNotificationsChanged;
- (BOOL)isHibernating;
- (void)rebuildViewsAndStopHibernating;
- (int)defaultStyle;
- (void)clearViewsAndHibernate;
- (void)_configureBBObserver;
- (void)dealloc;
- (id)init;

@end

