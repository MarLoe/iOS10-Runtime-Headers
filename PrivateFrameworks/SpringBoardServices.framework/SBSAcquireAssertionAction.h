/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSAcquireAssertionAction : BSAction  {
}

@property(readonly) NSString * assertionName;
@property(readonly) NSString * reason;
@property(readonly) unsigned int port;

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(id)arg3;

- (id)assertionName;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)reason;
- (unsigned int)port;

@end