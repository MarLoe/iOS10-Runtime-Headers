/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItem : NSObject <MPAVMetadataItem, MPCRadioItemIdentifier, MusicEntityValueProviding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int  _advancedDuringPlayback;
    NSString * _aggregateDictionaryItemIdentifier;
    long long  _albumStoreID;
    bool  _allowsAirPlayFromCloud;
    bool  _allowsExternalPlayback;
    MPAlternateTracks * _alternateTracks;
    NSArray * _artworkTimeMarkers;
    AVAsset * _asset;
    NSError * _assetError;
    NSObject<OS_dispatch_queue> * _assetQueue;
    AVPlayerItem * _avPlayerItem;
    NSArray * _buyOffers;
    double  _cachedDuration;
    double  _cachedPlayableDuration;
    NSArray * _cachedSeekableTimeRanges;
    bool  _canReusePlayerItem;
    NSArray * _chapterTimeMarkers;
    NSArray * _closedCaptionTimeMarkers;
    NSString * _copyrightText;
    float  _currentPlaybackRate;
    float  _defaultPlaybackRate;
    bool  _didAttemptToLoadAsset;
    MPQueueFeeder * _feeder;
    unsigned int  _handledFinishTime;
    bool  _hasLoadedPlaybackMode;
    unsigned int  _hasPlayedThisSession;
    bool  _hasPostedNaturalSizeChange;
    bool  _hasRegisteredForCaptionsAppearanceChanged;
    bool  _hasValidPlayerItemDuration;
    unsigned long long  _indexInQueueFeeder;
    bool  _isAssetLoaded;
    unsigned int  _isStreamable;
    long long  _likedState;
    bool  _likedStateEnabled;
    bool  _limitReadAhead;
    float  _loudnessInfoVolumeNormalization;
    unsigned int  _lyricsAvailable;
    MPMediaItem * _mediaItem;
    MPModelObject * _modelObject;
    MPModelSong * _modelSong;
    long long  _playbackMode;
    MPAVController * _player;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playerItemDuration;
    <MPAVItemPlaylistIdentifier> * _playlistIdentifier;
    bool  _prefersHLS;
    <MPAVItemQueueIdentifier> * _queueIdentifier;
    double  _seekableTimeRangesCacheTime;
    bool  _shouldUseStreamingRedownload;
    float  _soundCheckVolumeNormalization;
    long long  _storeItemInt64ID;
    long long  _storeSubscriptionAdamID;
    bool  _supportsLikedState;
    unsigned int  _timeMarkersNeedLoading;
    long long  _type;
    NSArray * _urlTimeMarkers;
    unsigned int  _userChangedItemsDuringPlayback;
    unsigned int  _wasCountedAsSkipped;
    unsigned int  _watchingAttributes;
}

@property (nonatomic, readonly) MPCContentItemIdentifierCollection *MPC_contentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:, nonatomic) float _currentPlaybackRate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } _playerItemDurationIfAvailable;
@property (nonatomic, readonly) AVPlayerItemAccessLog *accessLog;
@property (nonatomic, readonly, copy) NSString *aggregateDictionaryItemIdentifier;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly, copy) NSString *albumBuyButtonText;
@property (nonatomic, readonly) long long albumBuyButtonType;
@property (nonatomic, readonly) long long albumStoreID;
@property (nonatomic, readonly) unsigned long long albumTrackCount;
@property (nonatomic, readonly) unsigned long long albumTrackNumber;
@property (nonatomic, readonly) bool allowsAirPlayFromCloud;
@property (nonatomic, readonly) bool allowsEQ;
@property (nonatomic, readonly) bool allowsExternalPlayback;
@property (nonatomic, readonly) MPAlternateTracks *alternateTracks;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) long long artistStoreID;
@property (nonatomic, retain) NSArray *artworkTimeMarkers;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, retain) NSError *assetError;
@property (nonatomic, readonly, copy) NSString *assetFlavor;
@property (nonatomic, readonly) RadioAudioClip *audioClip;
@property (nonatomic, readonly, copy) NSNumber *bookmarkTime;
@property (nonatomic, readonly, copy) NSArray *buyOffers;
@property (nonatomic, readonly) bool canReusePlayerItem;
@property (nonatomic, readonly) bool canSeedGenius;
@property (nonatomic, retain) NSArray *chapterTimeMarkers;
@property (nonatomic, retain) NSArray *closedCaptionTimeMarkers;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) double currentTimeDisplayOverride;
@property (nonatomic, readonly) long long customAVEQPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultPlaybackRate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didAttemptToLoadAsset;
@property (nonatomic, readonly) bool didDeferLeaseStart;
@property (nonatomic, readonly) unsigned long long discCount;
@property (nonatomic, readonly) unsigned long long discNumber;
@property (nonatomic, readonly) NSString *displayableText;
@property (nonatomic, readonly) bool displayableTextLoaded;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) double durationFromExternalMetadata;
@property (nonatomic, readonly) double durationIfAvailable;
@property (nonatomic, readonly) bool durationIsValid;
@property (nonatomic, readonly) RadioArtworkCollection *effectiveArtworkCollection;
@property (getter=isExplicitTrack, nonatomic, readonly) bool explicitTrack;
@property (nonatomic) MPQueueFeeder *feeder;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) bool hasDisplayableText;
@property (nonatomic) bool hasPlayedThisSession;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexInQueueFeeder;
@property (nonatomic, readonly, copy) NSNumber *initialPlaybackStartTime;
@property (nonatomic, readonly) bool isAd;
@property (nonatomic, readonly) bool isAlwaysLive;
@property bool isAssetLoaded;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isRadioItem;
@property (nonatomic, readonly) bool isStreamingLowQualityAsset;
@property (nonatomic) long long likedState;
@property (getter=isLikedStateEnabled, nonatomic, readonly) bool likedStateEnabled;
@property (nonatomic) bool limitReadAhead;
@property (nonatomic, readonly) NSString *localizedPositionInPlaylistString;
@property (nonatomic) float loudnessInfoVolumeNormalization;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) NSString *mainTitle;
@property (nonatomic, readonly, retain) MPMediaItem *mediaItem;
@property (nonatomic, readonly) MPModelObject *modelObject;
@property (nonatomic, readonly) MPModelSong *modelSong;
@property (nonatomic, readonly) long long mpcReporting_equivalencySourceAdamID;
@property (nonatomic, readonly) bool mpcReporting_isValidReportingItem;
@property (nonatomic, readonly) unsigned long long mpcReporting_itemType;
@property (nonatomic, readonly, copy) NSData *mpcReporting_jingleTimedMetadata;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleVersion;
@property (nonatomic, readonly) bool mpcReporting_shouldReportPlayEventsToStore;
@property (nonatomic, readonly) bool mpcReporting_shouldUseRelativeTimePositions;
@property (nonatomic, readonly, copy) NSData *mpcReporting_trackInfo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) double playableDurationIfAvailable;
@property (nonatomic, readonly, copy) NSDictionary *playbackInfo;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic) MPAVController *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) <MPAVItemPlaylistIdentifier> *playlistIdentifier;
@property (nonatomic, readonly) NSURL *podcastURL;
@property (setter=_setPrefersHLS:, nonatomic) bool prefersHLS;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, retain) <MPAVItemQueueIdentifier> *queueIdentifier;
@property (nonatomic, readonly) RadioTrack *radioTrack;
@property (nonatomic, retain) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (setter=_setShouldUseStreamingRedownload:, nonatomic) bool shouldUseStreamingRedownload;
@property (nonatomic) float soundCheckVolumeNormalization;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) MPStoreDownload *storeDownload;
@property (nonatomic, readonly) NSString *storeItemID;
@property (nonatomic, readonly) long long storeItemInt64ID;
@property (nonatomic, readonly) long long storePlaybackEndpointType;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (nonatomic, readonly) RadioStreamTrack *streamTrack;
@property (getter=isStreamable, nonatomic, readonly) bool streamable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLikedState;
@property (nonatomic, readonly) bool supportsRadioTrackActions;
@property (nonatomic, readonly) bool supportsRating;
@property (nonatomic, readonly) bool supportsRewindAndFastForward15Seconds;
@property (nonatomic, readonly) bool supportsSettingCurrentTime;
@property (nonatomic, readonly) bool supportsSkip;
@property (nonatomic, readonly) double timeOfSeekableEnd;
@property (nonatomic, readonly) double timeOfSeekableStart;
@property (nonatomic, readonly) NSArray *timedMetadataIfAvailable;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSArray *urlTimeMarkers;
@property (nonatomic, readonly) bool useEmbeddedChapterData;
@property (nonatomic) bool userAdvancedDuringPlayback;
@property (nonatomic) bool userChangedItemsDuringPlayback;
@property (nonatomic, readonly) float userRating;
@property (nonatomic) bool userSkippedPlayback;
@property (nonatomic, readonly) bool usesSubscriptionLease;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (long long)defaultScaleMode;
+ (void)setDefaultScaleMode:(long long)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (float)_currentPlaybackRate;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (long long)_expectedPlaybackMode;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(id /* block */)arg2;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (long long)_persistedLikedState;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerItemDurationIfAvailable;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (void)_setCurrentPlaybackRate:(float)arg1;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(bool)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (void)_setPrefersHLS:(bool)arg1;
- (void)_setShouldUseStreamingRedownload:(bool)arg1;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)accessLog;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsEQ;
- (bool)allowsExternalPlayback;
- (id)alternateTracks;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)assetError;
- (id /* block */)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)bookmarkTime;
- (id)buyOffers;
- (bool)canReusePlayerItem;
- (bool)canSeedGenius;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (double)currentTimeDisplayOverride;
- (long long)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (bool)didAttemptToLoadAsset;
- (bool)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (bool)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (bool)durationIsValid;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (bool)hasDataForItemArtwork;
- (bool)hasDisplayableText;
- (bool)hasPlayedThisSession;
- (id)inBandAlternateTextTracks;
- (unsigned long long)indexInQueueFeeder;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initialPlaybackStartTime;
- (bool)isAd;
- (bool)isAlwaysLive;
- (bool)isAssetLoaded;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isLikedStateEnabled;
- (bool)isStreamable;
- (bool)isStreamingLowQualityAsset;
- (bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (long long)likedState;
- (bool)limitReadAhead;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (id)modelObject;
- (id)modelSong;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (id)playbackInfo;
- (long long)playbackMode;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(bool)arg3;
- (id)player;
- (id)playerItem;
- (id)playlistIdentifier;
- (id)podcastURL;
- (bool)prefersHLS;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)queueIdentifier;
- (void)reevaluatePlaybackMode;
- (void)reevaluateType;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(bool)arg2;
- (id)selectedAlternateTextTrack;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setAssetError:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPlayedThisSession:(bool)arg1;
- (void)setIndexInQueueFeeder:(unsigned long long)arg1;
- (void)setIsAssetLoaded:(bool)arg1;
- (void)setLikedState:(long long)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaylistIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(bool)arg1;
- (void)setUserChangedItemsDuringPlayback:(bool)arg1;
- (void)setUserSkippedPlayback:(bool)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupPlaybackInfo;
- (bool)shouldUseStreamingRedownload;
- (float)soundCheckVolumeNormalization;
- (long long)status;
- (id)storeDownload;
- (id)storeItemID;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (int)subtitleTrackID;
- (bool)supportsLikedState;
- (bool)supportsRating;
- (bool)supportsRewindAndFastForward15Seconds;
- (bool)supportsSettingCurrentTime;
- (bool)supportsSkip;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)timedMetadataIfAvailable;
- (id)titlesForTime:(double)arg1;
- (long long)type;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (bool)userAdvancedDuringPlayback;
- (bool)userChangedItemsDuringPlayback;
- (float)userRating;
- (bool)userSkippedPlayback;
- (bool)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id /* block */)_music_entityValueHandlerForProperty:(id)arg1;
+ (void)_registerCustomEntityValueHandlers;
+ (void)_registerEntityValueHandler:(id /* block */)arg1 forProperty:(id)arg2;

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_contentItemIdentifierCollection;
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
- (void)addDerivedStationForArtist:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)albumBuyButtonText;
- (long long)albumBuyButtonType;
- (id)assetFlavor;
- (id)audioClip;
- (id)effectiveArtworkCollection;
- (bool)isRadioItem;
- (long long)mpcReporting_equivalencySourceAdamID;
- (bool)mpcReporting_isValidReportingItem;
- (unsigned long long)mpcReporting_itemType;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (bool)mpcReporting_shouldReportPlayEventsToStore;
- (bool)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_trackInfo;
- (id)radioIdentifier;
- (id)radioTrack;
- (id)streamTrack;
- (bool)supportsRadioTrackActions;

@end
