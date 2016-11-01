/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate> {
    VSStoreURLBag * _bag;
    VSDeveloperServiceConnection * _developerServiceConnection;
    bool  _hasDeterminedInitialStatus;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    long long  _status;
}

@property (nonatomic, retain) VSStoreURLBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSDeveloperServiceConnection *developerServiceConnection;
@property (nonatomic) bool hasDeterminedInitialStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversOfStatus;
+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)_accountStoreChanged:(id)arg1;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(id /* block */)arg1;
- (void)_sendStatusChangeNotification;
- (id)bag;
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)developerServiceConnection;
- (bool)hasDeterminedInitialStatus;
- (id)init;
- (id)preferences;
- (id)privateQueue;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)setBag:(id)arg1;
- (void)setDeveloperServiceConnection:(id)arg1;
- (void)setHasDeterminedInitialStatus:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
