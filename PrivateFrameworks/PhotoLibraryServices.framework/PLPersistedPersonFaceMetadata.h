/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedPersonFaceMetadata : NSObject <NSCoding, PLFaceRebuildDescription> {
    NSString * _assetCloudGUID;
    NSString * _assetUUID;
    double  _centerX;
    double  _centerY;
    int  _faceAlgorithmVersion;
    bool  _hidden;
    bool  _isHidden;
    bool  _manual;
    bool  _nameSourceAuto;
    bool  _representative;
    double  _size;
}

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int faceAlgorithmVersion;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHidden, nonatomic, readonly) bool isHidden;
@property (getter=isManual, nonatomic) bool manual;
@property (getter=isNameSourceAuto, nonatomic) bool nameSourceAuto;
@property (getter=isRepresentative, nonatomic) bool representative;
@property (nonatomic) double size;
@property (readonly) Class superclass;

+ (void)_migratePersistedFaces:(id)arg1 fromVersion:(unsigned long long)arg2;
+ (id)detectedFacePropertiesToFetch;
+ (id)detectedFaceRelationshipKeyPathsToPrefetch;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
+ (id)persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(bool)arg2;

- (void).cxx_destruct;
- (id)assetCloudGUID;
- (id)assetUUID;
- (double)centerX;
- (double)centerY;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)faceAlgorithmVersion;
- (id)initWithCoder:(id)arg1;
- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1;
- (bool)isHidden;
- (bool)isHidden;
- (bool)isManual;
- (bool)isNameSourceAuto;
- (bool)isRepresentative;
- (void)setAssetCloudGUID:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setFaceAlgorithmVersion:(int)arg1;
- (void)setHidden:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSourceAuto:(bool)arg1;
- (void)setRepresentative:(bool)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
