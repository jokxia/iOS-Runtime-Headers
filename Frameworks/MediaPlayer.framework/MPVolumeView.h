/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVolumeViewInternal;



@interface MPVolumeView : UIView <NSCoding>
{
    MPVolumeViewInternal *_internal;
}

+ (void)_initializeSafeCategory;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)_routeButton;
- (void)_setVolumeAudioCategory:(id)arg1;
- (void)_createSubviews;
- (void)_displayAudioRoutePicker;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (id)_routeButtonImage;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

@end