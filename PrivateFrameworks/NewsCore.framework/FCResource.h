/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCResource : NSObject {
    FCAssetHandle * _assetHandle;
    FCInterestToken * _interestToken;
    NTPBResourceRecord * _resourceRecord;
}

@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) NSString *changeTag;
@property (nonatomic, readonly) NSDate *fetchedDate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSString *mimeType;
@property (getter=isOnDisk, nonatomic, readonly) bool onDisk;
@property (nonatomic, readonly) NSString *resourceID;
@property (nonatomic, retain) NTPBResourceRecord *resourceRecord;

- (void).cxx_destruct;
- (id)assetHandle;
- (id)changeTag;
- (id)fetchedDate;
- (id)fileURL;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3;
- (id)interestToken;
- (bool)isOnDisk;
- (id)mimeType;
- (id)resourceID;
- (id)resourceRecord;
- (void)setInterestToken:(id)arg1;
- (void)setResourceRecord:(id)arg1;

@end
