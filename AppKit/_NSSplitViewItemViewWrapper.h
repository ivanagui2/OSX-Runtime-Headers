//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint, NSSplitViewItem, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface _NSSplitViewItemViewWrapper : NSView
{
    NSSplitViewItem *_splitViewItem;
    NSLayoutConstraint *_breadthConstraint;
    NSLayoutConstraint *_equalBreadthConstraint;
    NSLayoutConstraint *_firstEdgeConstraint;
    NSLayoutConstraint *_lastEdgeConstraint;
    NSVisualEffectView *_effectView;
    id _edgeHoverEventMonitor;
    double _minimumThickness;
    double _maximumThickness;
    unsigned int _isOverlaid:1;
    unsigned int _transientlyUncollapsedOnEdgeHover:1;
    unsigned int _revealsOnEdgeHoverInFullscreen:1;
    unsigned int _sidebar:1;
    unsigned int _reserved:28;
}

@property NSLayoutConstraint *breadthConstraint; // @synthesize breadthConstraint=_breadthConstraint;
@property NSLayoutConstraint *equalBreadthConstraint; // @synthesize equalBreadthConstraint=_equalBreadthConstraint;
@property NSSplitViewItem *splitViewItem; // @synthesize splitViewItem=_splitViewItem;
- (void)disengageBreadthConstraint;
- (void)updateBreadthConstraintPriority;
- (double)engageBreadthConstraintForAnimatingLastEdge:(BOOL)arg1;
- (void)wrapView;
@property(getter=isSidebar) BOOL sidebar;
- (void)_createOrUpdateMaximumSizeConstraint;
- (void)_createOrUpdateMinimumSizeConstraint;
@property double maximumThickness;
@property double minimumThickness;
- (void)_stopObservingEdgeHover;
- (void)_startObservingEdgeHover;
- (void)_willExitFullscreen:(id)arg1;
- (void)_willEnterFullscreen:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_stopObservingFullscreenForWindow:(id)arg1;
- (void)_startObservingFullscreenForWindow:(id)arg1;
@property BOOL revealsOnEdgeHoverInFullscreen;
@property(getter=isOverlaid) BOOL overlaid;
- (id)_overlayMaterialGroupName;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)_splitView;
- (void)dealloc;

@end

