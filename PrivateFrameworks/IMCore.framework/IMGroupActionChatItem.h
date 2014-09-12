/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem  {
    IMHandle *_sender;
}

@property(readonly) long long actionType;
@property(retain,readonly) IMHandle * sender;


- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (long long)actionType;
- (id)sender;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end