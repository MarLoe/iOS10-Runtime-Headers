/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject> {
}

@property(getter=isLocked) bool locked;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) CPLPlatformObject * platformObject;


- (id)popAllChangeBatchesWithError:(id*)arg1;
- (id)allChangeBatches;
- (bool)compactChangeBatchesWithError:(id*)arg1;
- (bool)popNextBatchWithError:(id*)arg1;
- (id)nextBatch;
- (bool)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (bool)appendChangeBatch:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfQueuedBatches;
- (bool)deleteAllChangeBatchesWithError:(id*)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (void)setLocked:(bool)arg1;
- (bool)isLocked;

@end