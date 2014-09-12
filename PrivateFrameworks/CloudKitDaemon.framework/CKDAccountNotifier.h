/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMapTable;

@interface CKDAccountNotifier : NSObject  {
    int _accountChangedToken;
    NSMapTable *_notificationObservers;
}

@property int accountChangedToken;
@property(retain) NSMapTable * notificationObservers;

+ (id)sharedNotifier;

- (void)setNotificationObservers:(id)arg1;
- (void)setAccountChangedToken:(int)arg1;
- (int)accountChangedToken;
- (id)notificationObservers;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(id)arg2;
- (void)postAccountChangedNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end