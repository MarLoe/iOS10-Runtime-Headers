/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {
    ML3AccountCacheDatabase * _accountCacheDatabase;
    ML3DatabaseConnectionPool * _connectionPool;
    NSString * _databasePath;
    <ML3MusicLibraryDelegate> * _delegate;
    bool  _isHomeSharingLibrary;
    bool  _isHomeSharingLibraryLoaded;
    NSArray * _libraryContainerFilterPredicates;
    NSArray * _libraryEntityFilterPredicates;
    NSArray * _libraryPublicContainerFilterPredicates;
    NSArray * _libraryPublicEntityFilterPredicates;
    NSString * _libraryUID;
    ML3LibraryNotificationManager * _notificationManager;
    NSMutableDictionary * _optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary * _optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary * _optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    NSMutableDictionary * _optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSObject<OS_dispatch_queue> * _serialQueue;
    struct iPhoneSortKeyBuilder { } * _sortKeyBuilder;
    NSString * _syncLibraryUID;
}

@property (nonatomic, readonly) long long autoFilledTracksTotalSize;
@property (nonatomic, readonly) ML3DatabaseConnectionPool *connectionPool;
@property (nonatomic, readonly) long long currentContentRevision;
@property (nonatomic, readonly) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property (nonatomic, readonly) ML3Container *currentDevicePurchasesPlaylist;
@property (nonatomic, readonly) long long currentRevision;
@property (nonatomic, readonly) ML3DatabaseMetadata *databaseInfo;
@property (nonatomic, readonly) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ML3MusicLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloadOnAddToLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHomeSharingLibrary;
@property (nonatomic, retain) NSArray *libraryContainerFilterPredicates;
@property (getter=isLibraryEmpty, nonatomic, readonly) bool libraryEmpty;
@property (nonatomic, retain) NSArray *libraryEntityFilterPredicates;
@property (nonatomic, retain) NSArray *libraryPublicContainerFilterPredicates;
@property (nonatomic, retain) NSArray *libraryPublicEntityFilterPredicates;
@property (nonatomic, readonly) NSString *libraryUID;
@property (nonatomic, readonly) NSArray *localizedSectionIndexTitles;
@property (nonatomic, readonly) bool mediaRestrictionEnabled;
@property (nonatomic, readonly) NSArray *preferredAudioTracks;
@property (nonatomic, readonly) NSArray *preferredSubtitleTracks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsUbiquitousPlaybackPositions;
@property (nonatomic) long long syncGenerationID;
@property (nonatomic) NSString *syncLibraryID;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (bool)companionDeviceActiveStoreAccountIsSubscriber;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
+ (bool)deviceSupportsMultipleLibraries;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (bool)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (void)enableAutomaticDatabaseValidation;
+ (void)enumerateSortMapTablesUsingBlock:(id /* block */)arg1;
+ (id)indexSchemaSQL;
+ (id)itemIndexSchemaSQL;
+ (id)itemNewSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)mediaFolderPath;
+ (id)mediaFolderPathByAppendingPathComponent:(id)arg1;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (bool)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 createParentFolderIfNecessary:(bool)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 isFolder:(bool*)arg4;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (void)setCompanionDeviceActiveStoreAccountSubscriber:(bool)arg1;
+ (id)sharedLibrary;
+ (id)sharedLibraryDatabasePath;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (bool)updateTrackIntegrityOnConnection:(id)arg1;
+ (bool)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_allArtworkVariantDirectories;
- (id)_allKeepLocalPlaylistTracks;
- (long long)_artworkTotalSize;
- (void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(long long)arg2 mediaType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (bool)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (long long)_clearAllCloudAssets;
- (bool)_clearAllRowsFromTables:(id)arg1;
- (long long)_clearDatabaseFileFreeSpace;
- (long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_clearPurgeableDatabaseFilesOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(bool)arg3;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeCloudAssets:(bool)arg3 includeAutoFilledTracks:(bool)arg4;
- (long long)_cloudAssetsTotalSize;
- (bool)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (void)_convertArtworkToDevicePreferredFormatFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)_databaseFileFreeSpace;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1;
- (bool)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(bool)arg5 usingConnection:(id)arg6;
- (void)_effectiveSettingsDidChangeNotification:(id)arg1;
- (void)_enumeratePurgeableAlbumTracksForUrgency:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumeratePurgeableStreamedTracksForUrgency:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(bool)arg2 includeCloudAssets:(bool)arg3 usingBlock:(id /* block */)arg4;
- (bool)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4;
- (bool)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 usingConnection:(id)arg5;
- (void)_loggingSettingsDidChangeNotification:(id)arg1;
- (unsigned long long)_managedClearPurgeableTracksOfAmount:(unsigned long long)arg1 urgency:(unsigned long long)arg2;
- (unsigned long long)_managedPurgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (id)_nonPurgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1;
- (id)_notInKeepLocalCollectionPredicate;
- (void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2;
- (id)_purgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1;
- (long long)_purgeableArtworkTotalSizeWithUrgency:(unsigned long long)arg1;
- (long long)_purgeableDatabaseFileSizeWithUrgency:(unsigned long long)arg1;
- (id)_purgeableItemsPredicateSQLWithUrgency:(unsigned long long)arg1;
- (id)_purgeableTrackPredicateWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(bool)arg2 includeCloudAssets:(bool)arg3;
- (long long)_purgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(bool)arg2;
- (bool)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1;
- (bool)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1;
- (bool)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1;
- (bool)_removeOrphanedArtworkTokensUsingConnection:(id)arg1;
- (bool)_shouldPurgeKeepLocalTracksForUrgency:(unsigned long long)arg1;
- (id)_systemUnicodeVersionData;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (unsigned long long)_totalSizeForAllNonCacheTracks;
- (bool)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 usingConnection:(id)arg4;
- (void)_updateDatabaseConnectionsProfilingLevel;
- (bool)_validateDatabaseUsingConnection:(id)arg1 error:(id*)arg2;
- (void)accessSortKeyBuilder:(id /* block */)arg1;
- (id)accountCacheDatabase;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(bool)arg5;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (bool)autoFilledTracksArePurgeable;
- (long long)autoFilledTracksTotalSize;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1;
- (bool)automaticDatabaseValidationDisabled;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutReaderConnection;
- (id)checkoutWriterConnection;
- (bool)cleanupArtworkWithOptions:(unsigned long long)arg1;
- (bool)cleanupArtworkWithOptions:(unsigned long long)arg1 usingConnection:(id)arg2;
- (bool)clearAllGeniusData;
- (long long)clearAllRemovedTracks;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(bool)arg3;
- (bool)coalesceMismatchedCollectionsUsingConnection:(id)arg1;
- (bool)coerceValidDatabaseWithError:(id*)arg1;
- (id)composerForComposerName:(id)arg1;
- (void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(bool)arg2;
- (void)connectionDidBeginDatabaseTransaction:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (id)connectionPool;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3;
- (bool)createIndexes;
- (bool)createMissingBuiltInSmartPlaylists;
- (long long)currentContentRevision;
- (int)currentDatabaseVersion;
- (id)currentDevicePlaybackHistoryPlaylist;
- (id)currentDevicePurchasesPlaylist;
- (long long)currentRevision;
- (void)databaseConnectionAllowingWrites:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)databaseInfo;
- (id)databasePath;
- (void)dealloc;
- (id)delegate;
- (bool)deleteArtworkToken:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 respectSongMattress:(bool)arg3;
- (bool)deleteDatabaseProperty:(id)arg1;
- (void)deletePresignedValidity;
- (bool)downloadOnAddToLibrary;
- (bool)dropItemIndexes;
- (bool)emptyAllTables;
- (void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(bool)arg5 usingBlock:(id /* block */)arg6;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* block */)arg4;
- (id)genreForGenre:(id)arg1;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* block */)arg4;
- (id)groupingKeyForString:(id)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (bool)hasPresignedValidity;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 usingConnection:(id)arg6;
- (bool)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 mediaType:(unsigned int)arg4;
- (bool)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (bool)inTransactionUpdateSearchMapOnConnection:(id)arg1;
- (bool)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(bool)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 readOnly:(bool)arg2 populateUnitTestTablesBlock:(id /* block */)arg3;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(bool*)arg2;
- (bool)isArtworkTokenAvailable:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (bool)isHomeSharingLibrary;
- (bool)isLibraryEmpty;
- (id)libraryContainerFilterPredicates;
- (id)libraryEntityFilterPredicates;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
- (id)libraryPublicContainerFilterPredicates;
- (id)libraryPublicEntityFilterPredicates;
- (id)libraryUID;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (bool)mediaRestrictionEnabled;
- (void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(long long)arg3;
- (void)migratePresignedValidity;
- (long long)minimumPurgeableStorage;
- (struct { long long x1; long long x2; })nameOrderForString:(id)arg1;
- (void)notifyCloudLibraryAvailabilityDidChange;
- (void)notifyContentsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyEntitiesAddedOrRemoved;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyKeepLocalStateDidChange;
- (void)notifyLibraryImportDidFinish;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifySectionsDidChange;
- (void)performDatabaseTransactionWithBlock:(id /* block */)arg1;
- (void)performReadOnlyDatabaseTransactionWithBlock:(id /* block */)arg1;
- (bool)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (bool)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(bool)arg2;
- (void)reconnectToDatabase;
- (bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (bool)recordPlayEventForContainerPersistentID:(long long)arg1;
- (bool)removeArtworkAssetWithToken:(id)arg1;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 usingConnection:(id)arg5;
- (void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3;
- (void)removeOrphanedTracks;
- (void)removeOrphanedTracksOnlyInCaches:(bool)arg1;
- (void)removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)removeSource:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeTombstonesForDeletedItems;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)repairAlbumArtistRelationshipsWithConnection:(id)arg1;
- (bool)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (bool)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)arg1;
- (void)setAutoFilledTracksArePurgeable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadOnAddToLibrary:(bool)arg1;
- (void)setIsHomeSharingLibrary:(bool)arg1;
- (void)setLibraryContainerFilterPredicates:(id)arg1;
- (void)setLibraryEntityFilterPredicates:(id)arg1;
- (void)setLibraryPublicContainerFilterPredicates:(id)arg1;
- (void)setLibraryPublicEntityFilterPredicates:(id)arg1;
- (void)setLibraryUID:(id)arg1;
- (void)setMinimumPurgeableStorage:(long long)arg1;
- (void)setShouldOptimizeStorage:(bool)arg1;
- (void)setSyncGenerationID:(long long)arg1;
- (void)setSyncLibraryID:(id)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (bool)shouldOptimizeStorage;
- (bool)supportsUbiquitousPlaybackPositions;
- (long long)syncGenerationID;
- (long long)syncIdFromMultiverseId:(id)arg1;
- (id)syncLibraryID;
- (unsigned long long)unknownSectionIndex;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(bool)arg5 usingConnection:(id)arg6;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (bool)updateSortMap;
- (bool)updateSortMapOnConnection:(id)arg1;
- (bool)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(bool)arg2;
- (bool)updateSystemPlaylistNamesForCurrentLanguage;
- (void)updateTrackIntegrity;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
- (bool)validateDatabase;
- (bool)validateSortMapUnicodeVersionOnConnection:(id)arg1;
- (id)valueForDatabaseProperty:(id)arg1;
- (bool)verifyPresignedValidity;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4;

- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeUpdateSQL:(id)arg1;
- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
