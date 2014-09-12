/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool_isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;
}

@property(retain) NSArray * subscriptionIDs;
@property bool isFetchAllSubscriptionsOperation;

+ (bool)supportsSecureCoding;

- (bool)isFetchAllSubscriptionsOperation;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end