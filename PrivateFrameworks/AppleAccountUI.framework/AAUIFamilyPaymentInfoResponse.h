/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse  {
    AAUIFamilyCreditCard *_creditCard;
}

@property(retain) AAUIFamilyCreditCard * creditCard;


- (void)setCreditCard:(id)arg1;
- (id)creditCard;
- (id)_parsedDateForServerMonth:(long long)arg1 year:(long long)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;

@end