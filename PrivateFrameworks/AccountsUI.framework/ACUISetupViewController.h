/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUISetupViewController : PSSetupController  {
    bool_didAttemptDataclassSetup;
    bool_shouldForceMailSetup;
}


- (void)finishedAccountSetup;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;
- (void)_dismissAndNotifyParent;
- (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;

@end