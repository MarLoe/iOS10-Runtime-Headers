/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}


- (unsigned int)band;
- (id)init;
- (id)data;
- (void)dealloc;
- (unsigned int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end