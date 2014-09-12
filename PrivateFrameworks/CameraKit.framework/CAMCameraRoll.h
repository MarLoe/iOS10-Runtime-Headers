/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class PHFetchResult, NSMutableDictionary, NSMutableSet, NSDate, PHAssetCollection;

@interface CAMCameraRoll : NSObject  {
    bool_changeNotificationsEnabled;
    bool__weakAssetCollectionLoaded;
    bool__hasPendingSessionAssets;
    bool__hasLoadedCameraRollFrameworks;
    NSDate *_sessionIdentifier;
    PHFetchResult *__weakAssetCollectionFetchResult;
    PHAssetCollection *__weakAssetCollection;
    PHFetchResult *__recentlyAddedAssetsFetchResult;
    NSMutableSet *__cachedChangeObservers;
    NSMutableDictionary *__inflightAssets;
    NSMutableSet *__sessionAssetUUIDs;
}

@property(readonly) NSDate * sessionIdentifier;
@property bool changeNotificationsEnabled;
@property(getter=_isWeakAssetCollectionLoaded,readonly) bool _weakAssetCollectionLoaded;
@property(readonly) PHFetchResult * _weakAssetCollectionFetchResult;
@property(readonly) PHAssetCollection * _weakAssetCollection;
@property(readonly) PHFetchResult * _recentlyAddedAssetsFetchResult;
@property(readonly) NSMutableSet * _cachedChangeObservers;
@property(readonly) NSMutableDictionary * _inflightAssets;
@property(readonly) NSMutableSet * _sessionAssetUUIDs;
@property(readonly) bool _hasPendingSessionAssets;
@property(readonly) bool _hasLoadedCameraRollFrameworks;

+ (id)sharedCameraRoll;

- (bool)_hasLoadedCameraRollFrameworks;
- (bool)_hasPendingSessionAssets;
- (id)_cachedChangeObservers;
- (id)_recentlyAddedAssetsFetchResult;
- (id)_weakAssetCollection;
- (id)_weakAssetCollectionFetchResult;
- (bool)changeNotificationsEnabled;
- (void)_registerAllChangeNotificationObservers;
- (void)_reloadSessionAssets;
- (void)_removeSessionAssets:(id)arg1;
- (id)_sessionAssetUUIDs;
- (id)_sessionLocalIdentifiers;
- (void)_unregisterChangeNotificationObserver:(id)arg1;
- (void)_registerChangeNotificationObserver:(id)arg1;
- (void)_ensureFetchedSessionAssets;
- (bool)isCameraSessionActive;
- (void)_updateWeakAlbumChangeNotificationsState;
- (void)_removeAllSessionAssets;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (void)_ensureWeakAssetCollection;
- (void)_invalidateAssetCollection;
- (bool)_isWeakAssetCollectionLoaded;
- (void)_unregisterAllObjectsForChangeNotifications;
- (void)addSessionAsset:(id)arg1;
- (void)removeInflightAsset:(id)arg1;
- (id)_inflightAssets;
- (id)fetchResultContainingAssetCollection;
- (id)realizedWeakAssetCollection;
- (void)preflightCameraRollFrameworks;
- (void)finishSession;
- (void)startNewSessionWithIdentifier:(id)arg1;
- (bool)updateFromChanges:(id)arg1;
- (void)removeChangeNotificationsObserver:(id)arg1;
- (void)setChangeNotificationsEnabled:(bool)arg1;
- (void)addChangeNotificationsObserver:(id)arg1;
- (bool)hasInflightAssets;
- (void)startNewSession;
- (void)addInflightAsset:(id)arg1;
- (id)album;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sessionIdentifier;

@end