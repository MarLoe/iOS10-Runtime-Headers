/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {
    NSData *_mescalHeaderData;
    int _status;
    struct { 
        unsigned int status : 1; 
    } _has;
}

@property(readonly) bool hasMescalHeaderData;
@property(retain) NSData * mescalHeaderData;
@property bool hasStatus;
@property int status;


- (bool)hasMescalHeaderData;
- (void)setMescalHeaderData:(id)arg1;
- (bool)hasStatus;
- (id)mescalHeaderData;
- (void)setHasStatus:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end