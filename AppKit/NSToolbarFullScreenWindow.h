//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

__attribute__((visibility("hidden")))
@interface NSToolbarFullScreenWindow : NSWindow
{
    BOOL _forcingToolbarVisible;
    BOOL _hotKeyNavigationForcingToolbarAndAuxViewVisible;
}

- (void)setAppearance:(id)arg1;
- (float)_backdropBleedAmount;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)_currentDividerResizeDirections;
- (BOOL)_performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (struct CGRect)startRectForSheet:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (struct CGRect)_tileFrameForFullScreen;
- (void)_adjustWindowToScreen;
- (id)_findKeyLoopGroupingViewFollowingKeyLoopGroupingView:(id)arg1 direction:(unsigned long long)arg2;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (BOOL)_attachToParentBeforeOrderingWindow;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (BOOL)_newFirstResponderIsInToolbar:(id)arg1;
- (BOOL)canHide;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)updateForceToolbarVisible;
- (id)_windowForToolbar;
- (id)_originalWindow;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)isMainWindow;
- (long long)_childWindowOrderingPriority;
- (void)_setWindowTag;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)isMovable;
- (BOOL)_hostsLayersInWindowServer;
- (BOOL)_allowsExteriorResizing;

@end
