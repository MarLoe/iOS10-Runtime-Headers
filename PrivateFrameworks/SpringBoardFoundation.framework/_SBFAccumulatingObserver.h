/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSString, NSError, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {
    NSMutableArray *_results;
    NSError *_error;
    bool_didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)waitForResults:(id*)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)init;
- (void)dealloc;

@end