//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColorSpaceSliders.h>

@interface NSGreySliders : NSColorSpaceSliders
{
    id greySlider;
    id greyText;
    id greyView;
    id greyButtons[5];
    id opacityButtons;
    double opacityDistanceFromBottom;
    BOOL alphaButtonsAreHidden;
}

+ (id)genericColorSpace;
- (void)alphaControlAddedOrRemoved:(id)arg1;
- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (void)adjustControls:(id)arg1;
- (BOOL)worksWhenModal;
- (void)jumpSlider:(id)arg1;
- (id)regularColorIfPossible:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (id)fieldEditableControl;
- (void)dealloc;
- (id)provideNewSubview:(id)arg1;
@property id greyButton4;
@property id greyButton3;
@property id greyButton2;
@property id greyButton1;
@property id greyButton0;
- (void)setGreyButton5:(id)arg1;
- (void)_configureGreyButton:(id)arg1 index:(long long)arg2;

@end
