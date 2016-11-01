/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraView : UIView {
    double  _badgeInset;
    NSArray * _badgeInsetConstraints;
    <UILayoutSupport> * _badgeTopLayoutGuide;
    HUCameraBadgeView * _badgeView;
    NSLayoutConstraint * _cameraAspectRatioConstraint;
    UIView * _cameraDimmingView;
    UIView * _cameraOverlayView;
    HMCameraView * _cameraView;
    HUCameraErrorContent * _errorContent;
    HUCameraErrorView * _errorView;
    HUDecayingTimer * _snapshotAgeUpdateTimer;
    NSArray * _staticConstraints;
}

@property (nonatomic) double badgeInset;
@property (nonatomic, retain) NSArray *badgeInsetConstraints;
@property (nonatomic, retain) <UILayoutSupport> *badgeTopLayoutGuide;
@property (nonatomic, readonly) HUCameraBadgeView *badgeView;
@property (nonatomic, retain) NSLayoutConstraint *cameraAspectRatioConstraint;
@property (nonatomic) long long cameraContentMode;
@property (nonatomic, readonly) UIView *cameraContentSnapshot;
@property (nonatomic, retain) UIView *cameraDimmingView;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (nonatomic, readonly) UIView *cameraOverlayView;
@property (nonatomic, retain) HMCameraSource *cameraSource;
@property (nonatomic, readonly) HMCameraView *cameraView;
@property (nonatomic, retain) HUCameraErrorContent *errorContent;
@property (nonatomic, retain) HUCameraErrorView *errorView;
@property (nonatomic, retain) HUDecayingTimer *snapshotAgeUpdateTimer;
@property (nonatomic, retain) NSArray *staticConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;
- (void)_updateBadgeView;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(bool)arg1;
- (void)_updateErrorVisibilityStateAnimated:(bool)arg1;
- (double)badgeInset;
- (id)badgeInsetConstraints;
- (id)badgeTopLayoutGuide;
- (id)badgeView;
- (id)cameraAspectRatioConstraint;
- (long long)cameraContentMode;
- (id)cameraContentSnapshot;
- (id)cameraDimmingView;
- (id)cameraOverlaySnapshot;
- (id)cameraOverlayView;
- (id)cameraSource;
- (id)cameraView;
- (void)dealloc;
- (id)errorContent;
- (id)errorView;
- (id)init;
- (id)initWithBadgeView:(id)arg1;
- (void)setBadgeInset:(double)arg1;
- (void)setBadgeInsetConstraints:(id)arg1;
- (void)setBadgeTopLayoutGuide:(id)arg1;
- (void)setCameraAspectRatioConstraint:(id)arg1;
- (void)setCameraContentMode:(long long)arg1;
- (void)setCameraDimmingView:(id)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setErrorContent:(id)arg1;
- (void)setErrorContent:(id)arg1 animated:(bool)arg2;
- (void)setErrorView:(id)arg1;
- (void)setSnapshotAgeUpdateTimer:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (id)snapshotAgeUpdateTimer;
- (id)staticConstraints;
- (void)updateConstraints;

@end
