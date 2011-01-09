/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class WAKView;



@interface WAKScrollView : WAKView <WebCoreFrameScrollView>
{
    WAKView *_documentView;
    id _delegate;
}

+ (void)_initializeSafeCategory;

- (void)setDocumentView:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)drawsBackground;
- (id)contentView;
- (id)documentView;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasHorizontalScroller;
- (void)setLineScroll:(float)arg1;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(id)arg1;
- (void)setHorizontalScrollingMode:(NSInteger)arg1;
- (void)setVerticalScrollingMode:(NSInteger)arg1;
- (void)setScrollingMode:(NSInteger)arg1;
- (NSInteger)horizontalScrollingMode;
- (NSInteger)verticalScrollingMode;
- (void)setActualScrollPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollingModes:(NSInteger)arg1 vertical:(NSInteger)arg2 andLock:(BOOL)arg3;
- (void)scrollingModes:(NSInteger*)arg1 vertical:(NSInteger*)arg2;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualDocumentVisibleRect;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityObject;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityContainer;
- (BOOL)isAccessibilityElement;

@end