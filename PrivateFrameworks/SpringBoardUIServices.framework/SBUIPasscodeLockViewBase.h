/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewBase : UIView <SBFLegibilitySettingsProviderDelegate, SBUIBiometricResourceObserver, SBUIPasscodeLockView, SBUIPasscodeLockView_Internal> {
    bool  _allowsStatusTextUpdatingOnResignFirstResponder;
    _UIFeedbackEventBehavior * _authenticationFeedbackBehavior;
    double  _backgroundAlpha;
    <SBFLegibilitySettingsProvider> * _backgroundLegibilitySettingsProvider;
    bool  _becameVisible;
    unsigned long long  _biometricMatchMode;
    <BSInvalidatable> * _biometricMatchingAssertion;
    NSMutableSet * _biometricMatchingEnabledOverrideReasons;
    unsigned long long  _biometricMatchingState;
    <SBUIBiometricResource> * _biometricResource;
    double  _currentBacklightLevel;
    int  _currentPendingBioUnlockToken;
    UIColor * _customBackgroundColor;
    <SBUIPasscodeLockViewDelegate> * _delegate;
    bool  _deviceHasBeenUnlockedOnceSinceBoot;
    SBUIPasscodeEntryField * _entryField;
    bool  _isBiometricAuthenticationAllowed;
    _UIFeedbackKeyboardBehavior * _keyboardFeedbackBehavior;
    _UILegibilitySettings * _legibilitySettings;
    double  _luminanceBoost;
    bool  _mesaLockedOut;
    bool  _needStatusTextUpdate;
    bool  _pendingBioUnlock;
    bool  _playsKeypadSounds;
    NSTimer * _screenBrightnessChangedTimer;
    bool  _screenOn;
    bool  _shouldResetForFailedPasscodeAttempt;
    bool  _showsEmergencyCallButton;
    bool  _showsStatusField;
    unsigned long long  _statusState;
    NSString * _statusSubtitleText;
    NSString * _statusText;
    int  _style;
}

@property (getter=_entryField, setter=_setEntryField:, nonatomic, retain) SBUIPasscodeEntryField *_entryField;
@property (nonatomic, retain) _UIFeedbackEventBehavior *authenticationFeedbackBehavior;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic, retain) <SBFLegibilitySettingsProvider> *backgroundLegibilitySettingsProvider;
@property (getter=isBiometricAuthenticationAllowed, nonatomic) bool biometricAuthenticationAllowed;
@property (nonatomic) unsigned long long biometricMatchMode;
@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPasscodeLockViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIFeedbackKeyboardBehavior *keyboardFeedbackBehavior;
@property (getter=_luminosityBoost, setter=_setLuminosityBoost:, nonatomic) double luminosityBoost;
@property (nonatomic, readonly) NSString *passcode;
@property (nonatomic) bool playsKeypadSounds;
@property (nonatomic, retain) NSTimer *screenBrightnessChangedTimer;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (nonatomic) bool shouldResetForFailedPasscodeAttempt;
@property (nonatomic) bool showsEmergencyCallButton;
@property (nonatomic) bool showsStatusField;
@property (getter=_statusState, setter=_setStatusState:, nonatomic) unsigned long long statusState;
@property (getter=_statusSubtitleText, setter=_setStatusSubtitleText:, nonatomic, copy) NSString *statusSubtitleText;
@property (getter=_statusText, setter=_setStatusText:, nonatomic, copy) NSString *statusText;
@property (nonatomic) int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearBrightnessChangeTimer;
- (id)_defaultStatusText;
- (id)_entryField;
- (void)_evaluateBiometricMatchingState;
- (void)_evaluateLuminance;
- (void)_handleBiometricAuthentication;
- (bool)_isBoundsPortraitOriented;
- (void)_luminanceBoostDidChange;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (double)_luminosityBoost;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;
- (void)_noteScreenBrightnessDidChange;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (long long)_orientation;
- (void)_overrideBiometricMatchingEnabled:(bool)arg1 forReason:(id)arg2;
- (void)_playAuthenticationFeedbackForSuccess:(bool)arg1 jiggleLock:(bool)arg2;
- (void)_resetForFailedMesaAttempt;
- (void)_resetForFailedPasscode:(bool)arg1;
- (void)_resetStatusText;
- (void)_screenBrightnessReallyDidChange;
- (void)_sendDelegateKeypadKeyDown;
- (void)_sendDelegateKeypadKeyUp;
- (void)_setBiometricMatchingState:(unsigned long long)arg1;
- (void)_setEntryField:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (void)_setStatusState:(unsigned long long)arg1;
- (void)_setStatusState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_setStatusSubtitleText:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (unsigned long long)_statusState;
- (unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1;
- (id)_statusSubtitleText;
- (id)_statusText;
- (void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(bool)arg1;
- (void)_updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(bool)arg2;
- (id)authenticationFeedbackBehavior;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id /* block */)arg1;
- (double)backgroundAlpha;
- (id)backgroundLegibilitySettingsProvider;
- (bool)becomeFirstResponder;
- (unsigned long long)biometricMatchMode;
- (id)biometricResource;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(bool)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBiometricAuthenticationAllowed;
- (bool)isFirstResponder;
- (bool)isScreenOn;
- (id)keyboardFeedbackBehavior;
- (id)passcode;
- (bool)playsKeypadSounds;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)reset;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)resetForFailedPasscode;
- (void)resetForScreenOff;
- (bool)resignFirstResponder;
- (id)screenBrightnessChangedTimer;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(bool)arg1;
- (void)setAuthenticationFeedbackBehavior:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (void)setBiometricAuthenticationAllowed:(bool)arg1;
- (void)setBiometricMatchMode:(unsigned long long)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardFeedbackBehavior:(id)arg1;
- (void)setNeedsStatusTextUpdate;
- (void)setPlaysKeypadSounds:(bool)arg1;
- (void)setScreenBrightnessChangedTimer:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setShouldResetForFailedPasscodeAttempt:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setStyle:(int)arg1;
- (bool)shouldResetForFailedPasscodeAttempt;
- (bool)showsEmergencyCallButton;
- (bool)showsStatusField;
- (int)style;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)updateStatusTextAnimated:(bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
