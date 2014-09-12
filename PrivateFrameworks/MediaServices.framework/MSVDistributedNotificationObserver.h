/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSString, NSDictionary, NSObject<OS_dispatch_queue>, <MSVDistributedNotificationObserverDelegate>;

@interface MSVDistributedNotificationObserver : NSObject  {
    int _notifyToken;
    NSString *_distributedName;
    NSString *_localName;
    NSObject<OS_dispatch_queue> *_queue;
    <MSVDistributedNotificationObserverDelegate> *_delegate;
    NSDictionary *_userInfoForLocalNotification;
}

@property(readonly) NSString * distributedName;
@property(readonly) NSString * localName;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property <MSVDistributedNotificationObserverDelegate> * delegate;
@property(copy) NSDictionary * userInfoForLocalNotification;

+ (id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;

- (id)distributedName;
- (void)setUserInfoForLocalNotification:(id)arg1;
- (id)userInfoForLocalNotification;
- (void)_handleDistributedNotificationWithNotifyToken:(int)arg1;
- (id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;
- (int)notifyToken;
- (id)localName;
- (id)queue;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end