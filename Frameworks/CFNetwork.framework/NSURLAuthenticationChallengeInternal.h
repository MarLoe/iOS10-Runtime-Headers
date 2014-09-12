/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NSURLAuthenticationChallengeSender>, NSURLResponse, NSURLCredential, NSURLProtectionSpace, NSError;

@interface NSURLAuthenticationChallengeInternal : NSObject  {
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    long long previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    <NSURLAuthenticationChallengeSender> *sender;
}


- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (void)dealloc;

@end