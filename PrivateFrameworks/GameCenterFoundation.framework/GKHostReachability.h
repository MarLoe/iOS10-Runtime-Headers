/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSError;

@interface GKHostReachability : GKReachability  {
    NSString *_hostName;
    NSError *_error;
}

@property(retain) NSString * hostName;
@property(retain) NSError * error;

+ (id)_gkReachabilityWithHostName:(id)arg1;

- (void)setHostName:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)hostName;

@end