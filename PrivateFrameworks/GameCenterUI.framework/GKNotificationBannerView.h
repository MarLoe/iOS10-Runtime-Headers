/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, GKLabel;

@interface GKNotificationBannerView : UIView  {
    UIImageView *_imageView;
    GKLabel *_titleLabel;
    GKLabel *_messageLabel;
    double _duration;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchHandler;

    double _preferredWidthPad;
}

@property(readonly) UIImageView * imageView;
@property(readonly) GKLabel * titleLabel;
@property(readonly) GKLabel * messageLabel;
@property(readonly) double preferredWidthPad;
@property double duration;
@property(copy) id completionHandler;
@property(copy) id touchHandler;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)showWithTouchHandler:(id)arg1;
- (void)showWithCompletionHandler:(id)arg1;
- (id)initWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)touchHandler;
- (void)setTouchHandler:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;
- (double)preferredWidthPad;
- (void)callCompletionHandler;
- (void)_wasTouched:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (double)duration;
- (void)setCompletionHandler:(id)arg1;
- (id)imageView;
- (id)messageLabel;
- (id)completionHandler;
- (id)titleLabel;
- (void)layoutSubviews;

@end