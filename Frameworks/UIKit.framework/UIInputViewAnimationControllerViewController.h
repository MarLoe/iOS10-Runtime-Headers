/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIViewControllerAnimatedTransitioning_Keyboard>, NSString, <UIViewControllerContextTransitioning>;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {
    <UIViewControllerContextTransitioning> *_context;
    <UIViewControllerAnimatedTransitioning_Keyboard> *_animator;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)controllerWithContext:(id)arg1;

- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end