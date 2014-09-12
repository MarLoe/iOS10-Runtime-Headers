/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying> {
    NSArray *_containerRelations;
}

@property(copy) NSArray * containerRelations;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;

- (id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2;
- (void)setContainerRelations:(id)arg1;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)containerRelations;
- (id)init;
- (void).cxx_destruct;

@end