/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class SLTwitterSession;

@interface SLTwitterComposeViewController : SLMicroBlogComposeViewController  {
    SLTwitterSession *_remoteSession;
}

+ (id)serviceBundle;

- (void)presentNoAccountsAlert;
- (void)tearDownSession;
- (void).cxx_destruct;
- (id)session;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end