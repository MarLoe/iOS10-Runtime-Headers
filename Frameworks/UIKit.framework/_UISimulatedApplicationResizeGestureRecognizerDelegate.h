/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UISwipeGestureRecognizer;

@interface _UISimulatedApplicationResizeGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate> {
    UISwipeGestureRecognizer *_shrinkGesture;
    UISwipeGestureRecognizer *_growGesture;
}

@property(retain) UISwipeGestureRecognizer * shrinkGesture;
@property(retain) UISwipeGestureRecognizer * growGesture;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)dealloc;
- (id)growGesture;
- (id)shrinkGesture;
- (void)setGrowGesture:(id)arg1;
- (void)handleGrowGesture:(id)arg1;
- (void)setShrinkGesture:(id)arg1;
- (void)handleShrinkGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end