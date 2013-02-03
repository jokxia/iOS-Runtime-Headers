/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, NSString, NSObject<OS_dispatch_queue>, MPPurchasableMediaDownloadManager, NSMutableArray, NSOperation;

@interface MPPurchasableMediaDownload : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _bytesDownloaded;
    BOOL _cancelled;
    unsigned long long _downloadIdentifier;
    double _downloadPercentComplete;
    NSString *_downloadPhaseIdentifier;
    NSError *_failureError;
    BOOL _finished;
    BOOL _hasCheckedRestoreDownload;
    unsigned long long _libraryItemIdentifier;
    MPPurchasableMediaDownloadManager *_manager;
    NSMutableArray *_observers;
    NSOperation *_operation;
    BOOL _restoreDownload;
    long long _storeItemIdentifier;
}

@property(readonly) long long bytesDownloaded;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(readonly) long long downloadIdentifier;
@property(readonly) double downloadPercentComplete;
@property(readonly) NSString * downloadPhaseIdentifier;
@property(readonly) NSError * failureError;
@property(getter=isFinished,readonly) BOOL finished;
@property(readonly) unsigned long long libraryItemIdentifier;
@property(getter=isPaused,readonly) BOOL paused;
@property(getter=isRestoreDownload,readonly) BOOL restoreDownload;
@property(readonly) long long storeItemIdentifier;

- (void)_notifyDidCancel;
- (void)_notifyDidFinishWithError:(id)arg1;
- (void)_notifyDidProgressWithPercentComplete:(double)arg1;
- (void)_notifyDidPurchaseWithPurchase:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)bytesDownloaded;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (long long)downloadIdentifier;
- (double)downloadPercentComplete;
- (id)downloadPhaseIdentifier;
- (id)failureError;
- (id)init;
- (id)initWithManager:(id)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isPaused;
- (BOOL)isRestoreDownload;
- (unsigned long long)libraryItemIdentifier;
- (id)manager;
- (void)removeObserver:(id)arg1;
- (void)setBytesDownloaded:(long long)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setDownloadIdentifier:(unsigned long long)arg1;
- (void)setDownloadPercentComplete:(double)arg1;
- (void)setDownloadPhaseIdentifier:(id)arg1;
- (void)setFailureError:(id)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setManager:(id)arg1;
- (void)setRestoreDownload:(BOOL)arg1;
- (void)setStoreItemIdentifier:(long long)arg1;
- (long long)storeItemIdentifier;

@end