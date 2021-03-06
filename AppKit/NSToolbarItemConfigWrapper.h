//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class NSImage;

@interface NSToolbarItemConfigWrapper : NSToolbarItem
{
    NSToolbarItem *_wrappedItem;
    NSImage *_activeImage;
    NSImage *_inactiveImage;
}

- (id)_buttonAtIndex:(unsigned long long)arg1;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (id)_itemAtViewIndex:(long long)arg1;
- (id)_itemAtLabelIndex:(long long)arg1;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (BOOL)_viewIsEnabledAtIndex:(long long)arg1;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(BOOL)arg3;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(BOOL)arg2;
- (void)dealloc;
- (BOOL)_participatesInDefiningMinimumGridWidthForCustomizationPalette;
- (id)initWithWrappedItem:(id)arg1;
- (void)_updateWrapperImage;
- (BOOL)_wantsImageWrapperForInsertionIntoPaletteToolbar:(id)arg1;
- (BOOL)_wantsCopyForInsertionIntoToolbar:(id)arg1 isPalette:(BOOL)arg2;

@end

