/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSObject<OS_dispatch_queue>, NSMutableSet;

@interface ML3SuicidePact : NSObject  {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property(readonly) bool isSigned;

+ (id)sharedPact;

- (bool)isSignedForReason:(long long)arg1;
- (void)secedeForReason:(long long)arg1;
- (void)_carryOutSuicidePact;
- (void)signForReason:(long long)arg1;
- (bool)isSigned;
- (void)execute;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end