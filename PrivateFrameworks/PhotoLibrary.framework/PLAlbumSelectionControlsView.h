/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, UIButton;

@interface PLAlbumSelectionControlsView : UIView {
    UIButton *_bgButton;
    NSString *_buttonAction;
    id _buttonTarget;
    int _controlsMode;
    UIButton *_rightButton;
}

@property int controlsMode;

- (int)controlsMode;
- (void)dealloc;
- (void)handleButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setControlsMode:(int)arg1;

@end
