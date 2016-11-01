/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {
    NSMutableSet * _completionHandlers;
    PKPaymentAuthorizationRemoteAlertViewController * _controller;
    <PKPaymentAuthorizationServiceProtocol> * _delegate;
    bool  _didForceDismiss;
}

@property (nonatomic, retain) NSMutableSet *completionHandlers;
@property (nonatomic) PKPaymentAuthorizationRemoteAlertViewController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationServiceProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (id)completionHandlers;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)forceDismissDidComplete;
- (void)handleDismissWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)initWithController:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
