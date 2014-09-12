/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    bool_currentLocation;
    struct { 
        unsigned int currentLocation : 1; 
    } _has;
}

@property(readonly) bool hasPlace;
@property(retain) GEOPlace * place;
@property bool hasCurrentLocation;
@property bool currentLocation;
@property(readonly) bool hasMapItemStorage;
@property(retain) GEOMapItemStorage * mapItemStorage;


- (bool)hasCurrentLocation;
- (void)setHasCurrentLocation:(bool)arg1;
- (bool)hasMapItemStorage;
- (bool)hasPlace;
- (id)place;
- (void)setPlace:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItemStorage:(id)arg1;
- (id)mapItemStorage;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCurrentLocation:(bool)arg1;
- (bool)currentLocation;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end