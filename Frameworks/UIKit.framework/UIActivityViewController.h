/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityViewController : UIViewController <UIActionSheetPresentationControllerDelegate, UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, _UIActivityHelperDelegate, _UIActivityViewControllerContentControllerDelegate> {
    id /* block */  __popoverDismissalAction;
    UIActivity * _activity;
    UIAlertAction * _activityAlertCancelAction;
    UIAlertController * _activityAlertController;
    _UIAlertControllerShimPresenter * _activityAlertControllerShimPresenter;
    _UIActivityHelper * _activityHelper;
    NSOperationQueue * _activityItemProviderOperationQueue;
    NSArray * _activityItemProviderOperations;
    NSArray * _activityItems;
    NSArray * _activityTypeOrder;
    UIViewController * _activityViewController;
    <UIActivityViewControllerDelegate> * _airDropDelegate;
    bool  _allowsEmbedding;
    NSArray * _applicationActivities;
    unsigned long long  _backgroundTaskIdentifier;
    long long  _completedProviderCount;
    id /* block */  _completionHandler;
    id /* block */  _completionWithItemsHandler;
    _UIActivityViewControllerContentController * _contentController;
    bool  _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    NSArray * _includedActivityTypes;
    NSString * _mailAutosaveIdentifier;
    long long  _originalPopoverBackgroundStyle;
    Class  _originalPopoverBackgroundViewClass;
    bool  _performActivityForStateRestoration;
    id /* block */  _preCompletionHandler;
    bool  _shouldMatchOnlyUserElectedExtensions;
    bool  _showKeyboardAutomatically;
    NSString * _subject;
    long long  _totalProviderCount;
    bool  _useBlackPopoverStyle;
    bool  _willDismissActivityViewController;
}

@property (nonatomic, copy) id /* block */ _popoverDismissalAction;
@property (nonatomic, retain) UIActivity *activity;
@property (nonatomic, retain) UIAlertAction *activityAlertCancelAction;
@property (nonatomic, retain) UIAlertController *activityAlertController;
@property (nonatomic, retain) _UIAlertControllerShimPresenter *activityAlertControllerShimPresenter;
@property (nonatomic, retain) _UIActivityHelper *activityHelper;
@property (nonatomic, retain) NSOperationQueue *activityItemProviderOperationQueue;
@property (nonatomic, retain) NSArray *activityItemProviderOperations;
@property (nonatomic, copy) NSArray *activityItems;
@property (nonatomic, copy) NSArray *activityTypeOrder;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (nonatomic) <UIActivityViewControllerDelegate> *airDropDelegate;
@property (nonatomic) bool allowsEmbedding;
@property (nonatomic, copy) NSArray *applicationActivities;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic) long long completedProviderCount;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ completionWithItemsHandler;
@property (nonatomic, retain) _UIActivityViewControllerContentController *contentController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic) bool dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *includedActivityTypes;
@property (nonatomic, retain) NSString *mailAutosaveIdentifier;
@property (nonatomic) long long originalPopoverBackgroundStyle;
@property (nonatomic, retain) Class originalPopoverBackgroundViewClass;
@property (nonatomic) bool performActivityForStateRestoration;
@property (nonatomic, copy) id /* block */ preCompletionHandler;
@property (nonatomic) bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) bool showKeyboardAutomatically;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic) long long totalProviderCount;
@property (nonatomic) bool useBlackPopoverStyle;
@property (nonatomic) bool willDismissActivityViewController;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_popoverPresentationUsesModernPresentation;
+ (void)_reloadImageForActivity:(id)arg1;
+ (bool)_usesActionSheetPresentationController;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (id)_activityItemValues;
- (id)_availableActivities;
- (id)_availableActivitiesForItems:(id)arg1;
- (id)_availableActivitiesForItems:(id)arg1 applicationExtensionActivities:(id)arg2;
- (id)_availableActivitiesMatchingOnlyUserElectedExtensions:(bool)arg1;
- (void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_beginInProgressActivityExecutionForcedStrongReference;
- (void)_cancel;
- (void)_changeActionButtonToDone;
- (void)_cleanupActivityWithSuccess:(bool)arg1;
- (void)_cleanupActivityWithSuccess:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_containedAlertController;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (double)_displayHeight;
- (void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_endInProgressActivityExecutionForcedStrongReference;
- (void)_executeActivity;
- (void)_mailAutosaveWithHandler:(id /* block */)arg1;
- (void)_notifyReloadImageForActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_performActivityOfType:(id)arg1;
- (void)_performDismissWithCompletionHandler:(id /* block */)arg1;
- (id)_placeholderActivityItemValues;
- (id /* block */)_popoverDismissalAction;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentUserDefaultsController:(id)arg1;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_reloadImageForActivity:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (void)_resetAfterActivity:(bool)arg1;
- (void)_setDarkStyleOnLegacyApp;
- (void)_setPopoverController:(id)arg1;
- (void)_setupLegacyAlertPresentationControllers;
- (bool)_shouldExcludeActivityType:(id)arg1;
- (bool)_shouldShowSystemActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (void)_updateActivityItems:(id)arg1 animated:(bool)arg2;
- (void)_updatePreferredContentSizes;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id)activity;
- (id)activityAlertCancelAction;
- (id)activityAlertController;
- (id)activityAlertControllerShimPresenter;
- (id)activityHelper;
- (id)activityItemProviderOperationQueue;
- (id)activityItemProviderOperations;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityViewController;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (id)airDropDelegate;
- (bool)allowsEmbedding;
- (id)applicationActivities;
- (unsigned long long)backgroundTaskIdentifier;
- (long long)completedProviderCount;
- (id /* block */)completionHandler;
- (id /* block */)completionWithItemsHandler;
- (id)contentController;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)includedActivityTypes;
- (id)init;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mailAutosaveIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)originalPopoverBackgroundStyle;
- (Class)originalPopoverBackgroundViewClass;
- (bool)performActivityForStateRestoration;
- (id /* block */)preCompletionHandler;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setActivity:(id)arg1;
- (void)setActivityAlertCancelAction:(id)arg1;
- (void)setActivityAlertController:(id)arg1;
- (void)setActivityAlertControllerShimPresenter:(id)arg1;
- (void)setActivityHelper:(id)arg1;
- (void)setActivityItemProviderOperationQueue:(id)arg1;
- (void)setActivityItemProviderOperations:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setAirDropDelegate:(id)arg1;
- (void)setAllowsEmbedding:(bool)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setCompletedProviderCount:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setContentController:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel:(bool)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setMailAutosaveIdentifier:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setOriginalPopoverBackgroundStyle:(long long)arg1;
- (void)setOriginalPopoverBackgroundViewClass:(Class)arg1;
- (void)setPerformActivityForStateRestoration:(bool)arg1;
- (void)setPreCompletionHandler:(id /* block */)arg1;
- (void)setShouldMatchOnlyUserElectedExtensions:(bool)arg1;
- (void)setShowKeyboardAutomatically:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setTotalProviderCount:(long long)arg1;
- (void)setUseBlackPopoverStyle:(bool)arg1;
- (void)setWillDismissActivityViewController:(bool)arg1;
- (void)set_popoverDismissalAction:(id /* block */)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldMatchOnlyUserElectedExtensions;
- (bool)showKeyboardAutomatically;
- (bool)sourceIsManaged;
- (id)subject;
- (long long)totalProviderCount;
- (void)updateActivities:(id)arg1 animated:(bool)arg2;
- (bool)useBlackPopoverStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (bool)willDismissActivityViewController;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkCallOnSuperSkippingSelf_viewDidAppear:(bool)arg1;

@end
