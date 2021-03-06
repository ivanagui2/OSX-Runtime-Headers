//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCGSContext.h>

#import "NSPrintGraphicsContextAdvancing.h"

@class NSDictionary, NSFocusStack;

@interface NSPrintCopyingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing>
{
    NSDictionary *_attributes;
    NSFocusStack *_focusStack;
    BOOL _isCopyingToPDF;
}

- (void)endDocument;
- (void)endPage;
- (void)beginPageWithBounds:(struct CGRect)arg1;
- (void)beginDocumentWithTitle:(id)arg1;
- (id)focusStack;
- (void)setFocusStack:(id)arg1;
- (BOOL)isDrawingToScreen;
- (id)attributes;
- (void)dealloc;
- (id)initWithContextAttributes:(id)arg1;

@end

