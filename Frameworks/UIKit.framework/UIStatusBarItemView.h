/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItem, UIStatusBarLayoutManager;



@interface UIStatusBarItemView : UIView 
{
    UIStatusBarItem *_item;
    NSInteger _foregroundStyle;
    BOOL _visible;
    BOOL _allowsUpdates;
    UIStatusBarLayoutManager *_layoutManager;
    float _currentOverlap;
    struct CGContext { } *_imageContext;
    float _imageContextScale;
}

@property BOOL allowsUpdates;
@property(getter=isVisible) BOOL visible;
@property(readonly) NSInteger foregroundStyle;
@property UIStatusBarLayoutManager *layoutManager;
@property(readonly) UIStatusBarItem *item;

+ (id)createViewForItem:(id)arg1 foregroundStyle:(NSInteger)arg2;
+ (id)imageNamed:(id)arg1 forForegroundStyle:(NSInteger)arg2;

- (id)contentsImageForStyle:(NSInteger)arg1;
- (float)standardPadding;
- (BOOL)updateForNewData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 actions:(NSInteger)arg2;
- (float)extraRightPadding;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (void)endImageContext;
- (id)textFont;
- (float)extraLeftPadding;
- (float)maximumOverlap;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
- (void)setAllowsUpdates:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setCurrentOverlap:(float)arg1;
- (NSInteger)foregroundStyle;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithItem:(id)arg1 style:(NSInteger)arg2;
- (float)currentOverlap;
- (float)currentLeftOverlap;
- (float)currentRightOverlap;
- (float)setStatusBarData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 actions:(NSInteger)arg2;
- (float)updateContentsAndWidth;
- (void)drawText:(id)arg1 forStyle:(NSInteger)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)drawText:(id)arg1 forStyle:(NSInteger)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 forWidth:(float)arg4 lineBreakMode:(NSInteger)arg5 letterSpacing:(float)arg6;
- (id)textColorForStyle:(NSInteger)arg1;
- (BOOL)animatesDataChange;
- (BOOL)animatesFrameChange;
- (void)performPendedActions;
- (BOOL)allowsUpdates;
- (BOOL)isVisible;
- (id)item;
- (void)setVisible:(BOOL)arg1;
- (void)setLayoutManager:(id)arg1;
- (id)layoutManager;
- (void)dealloc;
- (id)description;

@end