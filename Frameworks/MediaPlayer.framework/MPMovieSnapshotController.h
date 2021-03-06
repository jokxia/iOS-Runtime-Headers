/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CALayer, MPAVController, MPVideoView, NSMutableArray;

@interface MPMovieSnapshotController : NSObject {
    unsigned int _expectingTimeJump : 1;
    unsigned int _pendingRestore : 1;
    CALayer *_layer;
    float _originalTime;
    NSMutableArray *_pendingSnapshots;
    MPAVController *_player;
    MPVideoView *_videoView;
}

@property MPAVController * player;

- (id)_currentSnapshot;
- (void)_finishSnapshot:(id)arg1;
- (void)_restoreOriginalTime;
- (void)_startNextSnapshot;
- (void)_takeSnapshot:(id)arg1;
- (void)_timeDidJump:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)player;
- (void)scheduleSnapshotWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 time:(float)arg3 delegate:(id)arg4;
- (void)setLayer:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoView:(id)arg1;

@end
