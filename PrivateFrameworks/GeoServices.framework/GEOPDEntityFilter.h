/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    bool_includeSpokenNames;
    struct { 
        unsigned int includeSpokenNames : 1; 
    } _has;
}

@property bool hasIncludeSpokenNames;
@property bool includeSpokenNames;


- (bool)includeSpokenNames;
- (bool)hasIncludeSpokenNames;
- (void)setHasIncludeSpokenNames:(bool)arg1;
- (void)setIncludeSpokenNames:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end