//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSImage;

@interface NSVisualEffectView : NSView
{
    struct NSVisualEffectViewInternal *_NSVisualEffectViewInternal;
    CALayer *_darkenLayer;
    CALayer *_maskLayer;
    CALayer *_clearCopyLayer;
    unsigned int _dirty:1;
    unsigned int _hasMask:1;
    unsigned int _disableBlurFilter:1;
    unsigned int _titlebarMaterialDrawsSeparator:1;
    unsigned int _maskSet:1;
    unsigned int _clear:1;
    unsigned int _updateInDidMoveToWindow:1;
    unsigned int _hasAcceleration:1;
    unsigned int _emphasized:1;
    unsigned int _hasAccelerationCached:1;
    unsigned int _requiresBackdrop:1;
    unsigned int _appearsDarker:1;
    unsigned int _inheritsBlendGroup:1;
    unsigned int _reservedFlags:19;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)keyPathsForValuesAffecting_effectiveGroupName;
- (void)_updateVibrancy;
- (void)_updateAssociatedViewProxyLayers;
- (void)_updateAssociatedViewBackdrops;
- (void)_unregisterAssociatedView:(id)arg1;
- (void)_registerAssociatedView:(id)arg1;
- (void)_subviewGeometryChanged:(id)arg1;
@property(retain) NSImage *maskImage;
- (void)_setFillColorAndDrawMaskInRect:(struct CGRect)arg1;
- (void)_doHoverColorFillInRect:(struct CGRect)arg1;
- (void)_drawClearInMaskImage;
- (BOOL)_needsMaskImage;
- (id)_generateMaskImageWithCurrentFillColor;
- (id)_generateMaskImage;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_freeCachedMaskImages;
- (id)_backgroundColorForFontSmoothing;
- (id)fontSmoothingBackgroundColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (void)_directlyUpdateActiveState;
- (void)_updateAssociatedViewProxyLayersActiveState;
- (void)_updateProxyLayerForActiveState;
- (void)_updateAssociatedViewBackdropsForActiveState;
- (void)_updateCGSWindowBackdropForActiveState;
- (void)_update;
- (BOOL)_canUpdate;
- (BOOL)_needsDarkenLayer;
- (void)_didRemoveLayer;
- (BOOL)_needsProxyLayer;
- (BOOL)_needsCGSBackdrop;
- (BOOL)_needsCGSMaterial;
- (void)_setRequiresBackdrop:(BOOL)arg1;
- (void)layout;
- (void)_updateIfNeeded;
- (void)renewGState;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (void)drawRect:(struct CGRect)arg1;
- (id)_currentFillColor;
- (void)_markDirtyIfHasAccelerationChanged;
- (BOOL)_useAccessibilityColors;
- (id)_accessibilityFillColor;
- (id)_currentInsideWindowBackgroundColor;
- (id)_clearColorForCGSFill;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)_updateIfNeededIfNotUsingProxyLayers;
- (BOOL)_needsUpdateIfNotUsingProxyLayers;
- (void)_setWindow:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)updateLayer;
- (void)_updateLayerMaskForWithinWindowBlending;
- (BOOL)wantsUpdateLayer;
- (void)_windowChangedKeyState;
- (void)_updateLayerToPokeOutWindowPixels;
- (id)debugDescription;
- (void)_updateBackdropLayer;
- (int)_vibrancyBlendMode;
- (id)_vibrancyFilter;
- (id)_fillLayer;
- (id)_tintLayer;
- (void)_updateBackgroundLayer;
- (BOOL)_needsBackgroundLayer;
- (void)_updateDarkenLayer;
- (void)_cuiMakeOrUpdateBackgroundLayer:(id *)arg1;
- (void)_setAssociatedThemeFrame:(id)arg1;
- (id)_associatedThemeFrame;
- (BOOL)_shouldAddBorderLayer;
- (id)_cuiOptionsForWindowType:(struct __CFString *)arg1;
- (struct __CFString *)_cuiWindowType;
- (BOOL)_isTexturedWindow;
- (BOOL)_isHUDWindow;
- (BOOL)_isUtility;
- (unsigned long long)styleMask;
- (const CDStruct_2328522e *)_currentBackdropViewSpec;
- (void)_updateMaterialLayerForBlendingInsideWindow;
- (id)contentView;
- (void)_updateCABackdropLayerGroupName;
- (void)_updateCABackdropLayer;
- (id)_backdropLayer;
- (void)_updateMaterialLayer;
- (id)_cuiOptionsForCurrentMaterial;
- (BOOL)_needsMaterialLayer;
- (struct CGRect)_blurInputBounds;
- (id)_currentColorMonochromeColor;
- (double)_currentSaturationMultiplier;
- (double)_currentBlurRadius;
- (BOOL)_needsFilters;
- (void)_removeMaterialLayerIfNeeded;
- (void)_removeClearCopyLayersIfNeeded;
- (void)_removeProxyLayerIfNeeded;
- (void)_releaseBackdropIfNeeded;
- (void)_updateProxyLayer;
- (void)_updateCGSWindowBackdrop;
- (BOOL)allowsVibrancy;
- (long long)vibrancyEffect;
- (void)setVibrancyEffect:(long long)arg1;
- (void)_updateActiveStateForProxyLayer:(id)arg1;
- (void)_updateProperiesForProxyLayer:(id)arg1 view:(id)arg2 vibrancyEffect:(long long)arg3;
- (id)_createOrUpdateProxyLayer:(id)arg1 view:(id)arg2 vibrancyEffect:(long long)arg3;
- (id)_createOrUpdateBackdrop:(id)arg1 view:(id)arg2 vibrancyEffect:(long long)arg3;
@property long long blendingMode;
- (void)setTitlebarMaterialDrawsSeparator:(BOOL)arg1;
- (BOOL)titlebarMaterialDrawsSeparator;
- (void)setDisableBlurFilter:(BOOL)arg1;
- (BOOL)disableBlurFilter;
- (void)_accessiblityTransChanged:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_sleepWakeChanged:(id)arg1;
- (void)_commonInit;
- (struct CGRect)rectToClearBackingStore;
- (BOOL)_shouldUseActiveAppearance;
@property(readonly) long long interiorBackgroundStyle;
- (void)_invalidateAllSubviewsBecauseFontReferenceColorChanged;
- (void)_invalidateSubviewsOfView:(id)arg1;
- (void)_invalidateTextAndFontSmoothignInView:(id)arg1;
- (id)_effectiveGroupName;
- (void)_setGroupName:(id)arg1;
- (id)_groupName;
- (BOOL)_isClear;
- (void)_setClear:(BOOL)arg1;
- (void)_setInternalMaterialType:(long long)arg1;
- (void)_materialTypeChanged;
- (id)_currentMaterialName;
- (void)_markDirty;
@property long long state; // @dynamic state;
- (void)setAppearsDarker:(BOOL)arg1;
- (BOOL)appearsDarker;
- (void)setInheritsBlendGroup:(BOOL)arg1;
- (BOOL)inheritsBlendGroup;
- (void)setEmphasized:(BOOL)arg1;
- (BOOL)emphasized;
- (long long)_internalMaterialType;
- (void)_viewDidChangeAppearance:(id)arg1;
@property long long material;
- (long long)_internalMaterialFromMaterial:(long long)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_recursiveRemoveCachedContainngBackdropViewFromView:(id)arg1;

@end

