/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSString, GSTemporaryStorage, NSObject<GSAdditionStoring>;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {
    GSTemporaryStorage *_ts;
}

@property(readonly) NSObject<GSAdditionStoring> * storage;
@property(readonly) NSString * nameSpace;


- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)generationsRemove:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct NSObject { Class x1; }*)storage;
- (id)nameSpace;

@end