//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBOXRemoteMediaBrowserPanel;

@interface NSMediaLibraryBrowserController : NSObject
{
    id _browserProxy;
}

+ (unsigned long long)mediaTypeEnumForMask:(unsigned long long)arg1;
+ (unsigned long long)maskForMediaTypeEnum:(unsigned long long)arg1;
+ (id)sharedMediaLibraryBrowserController;
@property(readonly) PBOXRemoteMediaBrowserPanel *browserProxy; // @synthesize browserProxy=_browserProxy;
- (void)orderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)togglePanel:(id)arg1;
@property(getter=isVisible) BOOL visible;
- (void)setFrameAutosaveName:(id)arg1;
- (id)frameAutosaveName;
@property unsigned long long mediaLibraries;
@property struct CGRect frame;
- (void)dealloc;
- (id)init;

@end

