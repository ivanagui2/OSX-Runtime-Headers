//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuExtra.h"

@class AppleSoundSettings, AppleVolumeExtraTitle, AppleVolumeItemView, NSArray, NSMenu, NSMenuItem, NSString;

@interface AppleVolumeExtra : NSMenuExtra
{
    AppleVolumeItemView *_volumeItemView;
    NSMenu *_volumeMenu;
    NSMenu *_deviceMenu;
    NSMenuItem *_audioPortItem;
    NSMenuItem *_inputItem;
    NSMenuItem *_outputItem;
    NSMenuItem *_mikeyItem;
    NSMenuItem *_outputDevicesItem;
    NSMenuItem *_inputDevicesItem;
    NSMenuItem *_alertDevicesItem;
    NSMenuItem *_prefsItem;
    AppleSoundSettings *_soundSettings;
    AppleVolumeExtraTitle *_titleView;
    unsigned int _retaskableDeviceID;
    NSString *_mikeyString;
    BOOL _loaded;
    NSArray *_nibObjects;
}

- (BOOL)runSelfTest:(unsigned int)arg1 duration:(double)arg2;
- (void)openSoundPrefs:(id)arg1;
- (id)menu;
- (id)buildDeviceMenu:(BOOL)arg1;
- (id)buildAirplayMenu;
- (void)airPlayDeviceSelected:(id)arg1;
- (id)retaskableAudioPortSourceName;
- (void)retaskableModeChanged:(id)arg1;
- (void)changeInputDevice:(id)arg1;
- (void)changeOutputDevice:(id)arg1;
- (void)_updateAlertVolume:(id)arg1;
- (void)_soundSettingsChanged:(id)arg1;
- (void)refreshTitle;
- (void)refreshTitleAux:(id)arg1;
- (void)closeVolumeMenu:(id)arg1;
- (BOOL)convertedForNewUI;
- (id)AXDescription;
- (void)dealloc;
- (BOOL)lazyLoadNib;
- (id)initWithBundle:(id)arg1;
- (void)_start;

@end

