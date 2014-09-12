/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPMovie, NSString, MIPPodcast, MIPSong, MIPTVShow, NSMutableArray;

@interface MIPMediaItem : PBCodable <NSCopying> {
    long long _accountId;
    long long _creationDateTime;
    long long _duration;
    long long _fileSize;
    long long _modificationDateTime;
    long long _purchaseHistoryId;
    long long _releaseDateTime;
    long long _sagaId;
    long long _storeId;
    long long _storefrontId;
    int _artworkId;
    int _contentRating;
    NSString *_copyright;
    NSMutableArray *_libraryIdentifiers;
    NSString *_longDescription;
    int _mediaType;
    MIPMovie *_movie;
    MIPPodcast *_podcast;
    NSString *_purchaseHistoryRedownloadParams;
    int _purchaseHistoryToken;
    NSString *_sagaRedownloadParams;
    NSString *_shortDescription;
    MIPSong *_song;
    NSString *_sortTitle;
    NSString *_title;
    MIPTVShow *_tvShow;
    bool_explicitContent;
    struct { 
        unsigned int accountId : 1; 
        unsigned int creationDateTime : 1; 
        unsigned int duration : 1; 
        unsigned int fileSize : 1; 
        unsigned int modificationDateTime : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int releaseDateTime : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int storefrontId : 1; 
        unsigned int artworkId : 1; 
        unsigned int contentRating : 1; 
        unsigned int mediaType : 1; 
        unsigned int purchaseHistoryToken : 1; 
        unsigned int explicitContent : 1; 
    } _has;
}

@property bool hasMediaType;
@property int mediaType;
@property(readonly) bool hasTitle;
@property(retain) NSString * title;
@property(readonly) bool hasSortTitle;
@property(retain) NSString * sortTitle;
@property bool hasReleaseDateTime;
@property long long releaseDateTime;
@property bool hasCreationDateTime;
@property long long creationDateTime;
@property bool hasModificationDateTime;
@property long long modificationDateTime;
@property bool hasFileSize;
@property long long fileSize;
@property bool hasDuration;
@property long long duration;
@property bool hasContentRating;
@property int contentRating;
@property bool hasExplicitContent;
@property bool explicitContent;
@property(readonly) bool hasShortDescription;
@property(retain) NSString * shortDescription;
@property(readonly) bool hasLongDescription;
@property(retain) NSString * longDescription;
@property(readonly) bool hasCopyright;
@property(retain) NSString * copyright;
@property bool hasArtworkId;
@property int artworkId;
@property(retain) NSMutableArray * libraryIdentifiers;
@property bool hasStoreId;
@property long long storeId;
@property bool hasStorefrontId;
@property long long storefrontId;
@property bool hasAccountId;
@property long long accountId;
@property bool hasPurchaseHistoryId;
@property long long purchaseHistoryId;
@property bool hasPurchaseHistoryToken;
@property int purchaseHistoryToken;
@property(readonly) bool hasPurchaseHistoryRedownloadParams;
@property(retain) NSString * purchaseHistoryRedownloadParams;
@property bool hasSagaId;
@property long long sagaId;
@property(readonly) bool hasSagaRedownloadParams;
@property(retain) NSString * sagaRedownloadParams;
@property(readonly) bool hasSong;
@property(retain) MIPSong * song;
@property(readonly) bool hasMovie;
@property(retain) MIPMovie * movie;
@property(readonly) bool hasTvShow;
@property(retain) MIPTVShow * tvShow;
@property(readonly) bool hasPodcast;
@property(retain) MIPPodcast * podcast;


- (id)copyright;
- (bool)hasDuration;
- (id)movie;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sortTitle;
- (void)setExplicitContent:(bool)arg1;
- (void)setContentRating:(int)arg1;
- (int)contentRating;
- (void)setShortDescription:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (id)podcast;
- (id)tvShow;
- (id)song;
- (id)sagaRedownloadParams;
- (id)purchaseHistoryRedownloadParams;
- (int)purchaseHistoryToken;
- (long long)storefrontId;
- (bool)explicitContent;
- (long long)modificationDateTime;
- (long long)creationDateTime;
- (long long)releaseDateTime;
- (bool)hasPodcast;
- (bool)hasTvShow;
- (bool)hasMovie;
- (bool)hasSong;
- (bool)hasSagaRedownloadParams;
- (bool)hasPurchaseHistoryRedownloadParams;
- (bool)hasPurchaseHistoryToken;
- (void)setHasPurchaseHistoryToken:(bool)arg1;
- (bool)hasStorefrontId;
- (void)setHasStorefrontId:(bool)arg1;
- (void)setHasArtworkId:(bool)arg1;
- (bool)hasCopyright;
- (bool)hasLongDescription;
- (bool)hasShortDescription;
- (bool)hasExplicitContent;
- (void)setHasExplicitContent:(bool)arg1;
- (bool)hasContentRating;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (bool)hasFileSize;
- (void)setHasFileSize:(bool)arg1;
- (bool)hasModificationDateTime;
- (void)setHasModificationDateTime:(bool)arg1;
- (bool)hasCreationDateTime;
- (void)setHasCreationDateTime:(bool)arg1;
- (bool)hasReleaseDateTime;
- (void)setHasReleaseDateTime:(bool)arg1;
- (bool)hasSortTitle;
- (void)setPodcast:(id)arg1;
- (void)setMovie:(id)arg1;
- (void)setTvShow:(id)arg1;
- (void)setSong:(id)arg1;
- (void)setSagaRedownloadParams:(id)arg1;
- (void)setPurchaseHistoryRedownloadParams:(id)arg1;
- (void)setPurchaseHistoryToken:(int)arg1;
- (void)setStorefrontId:(long long)arg1;
- (void)setCopyright:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setModificationDateTime:(long long)arg1;
- (void)setCreationDateTime:(long long)arg1;
- (void)setReleaseDateTime:(long long)arg1;
- (void)setSortTitle:(id)arg1;
- (long long)purchaseHistoryId;
- (long long)sagaId;
- (long long)accountId;
- (bool)hasPurchaseHistoryId;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (bool)hasSagaId;
- (void)setHasSagaId:(bool)arg1;
- (void)setSagaId:(long long)arg1;
- (bool)hasAccountId;
- (void)setHasAccountId:(bool)arg1;
- (void)setAccountId:(long long)arg1;
- (bool)hasMediaType;
- (void)setHasMediaType:(bool)arg1;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (void)clearLibraryIdentifiers;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)arg1;
- (int)artworkId;
- (bool)hasArtworkId;
- (void)setArtworkId:(int)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setStoreId:(long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (long long)storeId;
- (bool)hasStoreId;
- (id)libraryIdentifiers;
- (void)setMediaType:(int)arg1;
- (id)longDescription;
- (int)mediaType;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setDuration:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)fileSize;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)duration;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (id)shortDescription;

@end