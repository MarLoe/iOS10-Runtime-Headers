/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    long long  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long _code;
@property (nonatomic, readonly) NSString *_domain;
@property (getter=_mapkit_isCLDenied, nonatomic, readonly) bool _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) bool _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) bool _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) bool _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (readonly) long long code;
@property (getter=isComparisonError, nonatomic, readonly) bool comparisonError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (getter=hd_isFromRequest, nonatomic, readonly) bool hd_fromRequest;
@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSString *hd_messageIDSDeviceIdentifier;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (readonly, copy) NSString *helpAnchor;
@property (nonatomic, readonly) bool hf_isHomeKitNamingError;
@property (getter=isHMError, nonatomic, readonly) bool hmError;
@property (getter=isHMFError, nonatomic, readonly) bool hmfError;
@property (nonatomic, readonly) bool isAuthenticationError;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly) id recoveryAttempter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tsp_isDocumentTooNewError;
@property (nonatomic, readonly) bool tsp_isRecoverable;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (long long)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(long long)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1;
+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)cx_callDirectoryStoreErrorWithCode:(long long)arg1;
+ (id)cx_errorWithCode:(long long)arg1;
+ (id)cx_incomingCallErrorWithCode:(long long)arg1;
+ (id)cx_requestTransactionErrorWithCode:(long long)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKErrorFromErrno;
+ (id)CKErrorWithPOSIXCode:(int)arg1;

- (id)CKClientSuitableError;
- (bool)CKIsNotFoundError;
- (bool)CKIsPOSIXErrorCode:(long long)arg1;
- (id)CKPropertiesToDescribe:(bool)arg1;
- (bool)isComparisonError;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

+ (id)errorWithInfo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_defaultDescriptionForCode:(long long)arg1;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_protectedDataInaccessibilityError;

- (bool)hk_isAuthorizationDeniedError;
- (bool)hk_isAuthorizationNotDeterminedError;
- (bool)hk_isCocoaNoSuchFileError;
- (bool)hk_isDatabaseAccessibilityError;
- (bool)hk_isHealthKitError;
- (bool)hk_isInternalFailureError;
- (bool)hk_isInvalidArgumentError;
- (bool)hk_isServiceDeviceNotFoundError;
- (bool)hk_isStreamFailureError;
- (bool)hk_isTimeoutError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;

- (bool)isHMError;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mapkit_directionsErrorCode;
- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (bool)_mapkit_isCLDenied;
- (bool)_mapkit_isCLErrorNetwork;
- (bool)_mapkit_isCLHeadingFailure;
- (bool)_mapkit_isCLLocationUnknown;
- (bool)_mapkit_isDirectionsError;
- (id)_mapkit_locationErrorSettingsURL;
- (long long)_mapkit_underlyingGEOError;

// Image: /System/Library/Frameworks/Metal.framework/Metal

- (id)initWithIOAccelError:(long long)arg1;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)ph_genericEntitlementError;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpUserErrorForCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)failingURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)APIAuthorizationErrorFromErrorCode:(long long)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(long long)arg1;
+ (id)APIGenericErrorFromErrorCode:(long long)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(long long)arg1;
+ (id)APILimitErrorFromErrorCode:(long long)arg1;
+ (id)APIParameterErrorFromErrorCode:(long long)arg1;
+ (id)APIUserErrorFromErrorCode:(long long)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2;

- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_un_descriptionForUNErrorCode:(long long)arg1;
+ (id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)_secureCodingSafeObject:(id)arg1;
- (id)vs_secureCodingSafeError;

// Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity

+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)wcInternalErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPError;
- (id)initWithATPError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)_ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)ax_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)userReadableError;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_errorWithCode:(long long)arg1;
+ (id)ak_wrappedAnisetteError:(int)arg1;

- (bool)ak_isUserCancelError;
- (bool)ak_isUserSkippedError;
- (bool)ak_isUserTryAgainError;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_timeoutError;

- (bool)bs_isCancelledError;
- (bool)bs_isTimeoutError;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)formattedCode:(long long)arg1;

- (id)formattedCode;
- (id)verboseDescription;
- (id)verboseDescriptionWithIdentation:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_errorFromErrno;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)br_errorWithPOSIXCode:(int)arg1;
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorAppLibraryNotFound:(id)arg1;
+ (id)brc_errorClientZoneNotFound:(id)arg1;
+ (id)brc_errorCompatibilityIssue;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorLoggedOut;
+ (id)brc_errorMethodNotImplemented:(const char *)arg1;
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoSuitableClientApp;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorNotOnDisk:(id)arg1;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;
+ (id)brc_errorPermissionError:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorSyncDisabled:(id)arg1;
+ (id)brc_errorUnknownKey:(id)arg1;

- (bool)br_isCloudDocsErrorCode:(long long)arg1;
- (bool)br_isCocoaErrorCode:(long long)arg1;
- (bool)br_isPOSIXErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (void)initialize;

- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (bool)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (unsigned long long)brc_containerResetErrorForSharedZone:(bool)arg1 resetReason:(const char **)arg2;
- (bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (id)brc_description;
- (bool)brc_isBlacklistError;
- (bool)brc_isCloudKitAssetFileModified;
- (bool)brc_isCloudKitCancellationError;
- (bool)brc_isCloudKitErrorNeedsPCSPrep;
- (bool)brc_isCloudKitErrorRequiringAssetRescan;
- (bool)brc_isCloudKitErrorRequiringAssetReupload;
- (bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorZoneMigrated;
- (bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (bool)brc_isCloudKitOutOfQuota;
- (bool)brc_isCloudKitUnknownItemError;
- (bool)brc_isCloudKitZoneNotFoundError;
- (bool)brc_isCloudKitZoneUserDeletedError;
- (bool)brc_isEverRetriable;
- (bool)brc_isOutOfSpaceError;
- (bool)brc_isResetError;
- (bool)brc_isRetriable;
- (bool)brc_shouldRetryBubbleLater;
- (id)brc_strippedError;
- (int)brc_syncOperationErrorKind;
- (id)brc_wrappedError;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)_cplSafeUserInfoForXPCDidChange:(bool*)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (bool)isCPLError;
- (bool)isCPLErrorWithCode:(long long)arg1;
- (bool)isCPLOperationCancelledError;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (bool)shouldDisplayToUser;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (bool)isAuthenticationError;
- (bool)isCoolDownError;
- (bool)isICSCRecoveryHardLimitError;
- (bool)isLoginHardLimit;
- (bool)isLoginSoftLimit;
- (bool)isRecoveryPETHardLimitError;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)errorWithOSStatus:(int)arg1;
+ (id)hapErrorWithcode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;

- (bool)isHAPError;
- (bool)isHMError;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;

- (int)MMCSErrorType;
- (bool)MMCSIsAuthorizationError;
- (bool)MMCSIsCancelError;
- (bool)MMCSIsFatalError;
- (bool)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (bool)MSASStateMachineIsCanceledError;
- (bool)MSCanBeIgnored;
- (bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)MSFindPrimaryError;
- (bool)MSIsAuthError;
- (bool)MSIsBadTokenError;
- (bool)MSIsCounted;
- (bool)MSIsFatal;
- (bool)MSIsQuotaError;
- (bool)MSIsRegistrationError;
- (bool)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (bool)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(id /* block */)arg1;
- (void)_MSApplyBlock:(id /* block */)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC

+ (id)cecAcknowledgementErrorWithUnderlyingError:(id)arg1;
+ (id)cecFeatureAbortErrorWithOpCode:(unsigned char)arg1 reason:(unsigned char)arg2 method:(id)arg3;
+ (id)cecIOErrorWithUnderlyingError:(id)arg1;

- (bool)isCECAcknowledgementError;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_cancelledError;
+ (id)fm_errorWithCode:(unsigned long long)arg1;
+ (id)fm_genericError;
+ (id)fm_timeoutError;

- (bool)fm_isCancelledError;
- (bool)fm_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)sceneMessageErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkUnauthenticatedError;
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;

- (bool)_gkIsUnauthenticatedError;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference

+ (id)AVConferenceServiceError:(long long)arg1 detailCode:(long long)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 returnCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)zilchDecoderErrorForNoSolution;

- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmfErrorWithCode:(long long)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;

- (bool)isHMFError;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_errorWithCodableError:(id)arg1;

- (bool)hd_isConstraintViolation;
- (bool)hd_isDatabaseCorruptionError;
- (bool)hd_isFromRequest;
- (bool)hd_isResponseTimeout;
- (unsigned short)hd_messageID;
- (id)hd_messageIDSDeviceIdentifier;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageSent;
- (id)hd_persistentMessage;
- (id)hd_persistentUserInfo;
- (id)hd_underlyingSQLiteError;
- (id)hk_codableError;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (bool)hf_isHomeKitNamingError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;

- (id)conciseCKError;
- (id)hmErrorFromCKError;
- (bool)isHMError;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)genericErrorWithFile:(const char *)arg1 function:(const char *)arg2 lineNumber:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;

- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_cancelledError;
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_timeoutError;

- (bool)mf_isCancelledError;
- (bool)mf_isTimeoutError;
- (id /* block */)mf_match;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_isInaccessibleAccountCredentialError;
- (bool)mf_isMissingAccountCredentialError;
- (bool)mf_isSMIMEError;
- (bool)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (bool)mf_shouldBeReportedToUser;
- (bool)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)ml_errorWithCode:(unsigned long long)arg1;
+ (id)ml_errorWithCode:(unsigned long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_errorWithCode:(long long)arg1;
+ (id)_navigation_errorWithCode:(long long)arg1 userInfo:(id)arg2;

- (id)_navigation_errorCodeAsString;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_cancelledError;
+ (id)na_errorWithCode:(unsigned long long)arg1;
+ (id)na_genericError;
+ (id)na_timeoutError;

- (bool)na_isCancelledError;
- (bool)na_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_belowMinimumVersionError;
+ (id)fc_canaryDownError;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)fc_feedDroppedError;
+ (id)fc_notAvailableError;
+ (id)fc_notCachedError;
+ (id)fc_offlineErrorWithReason:(long long)arg1;

- (bool)fc_isCKErrorWithCode:(long long)arg1;
- (bool)fc_isCKUnknownItemError;
- (bool)fc_isCancellationError;
- (bool)fc_isNetworkUnavailableError;
- (bool)fc_isServiceUnavailableError;
- (bool)fc_shouldRetry;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (bool)tsu_isCancelError;
- (bool)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)pr_errorWithCode:(long long)arg1;

- (bool)pr_isInPersonaDomain;
- (bool)pr_isNetworkAvailabilityError;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision

+ (id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)phaErrorForNilParameterNamed:(id)arg1;
+ (id)phaErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)phaNotImplementedErrorForSelector:(SEL)arg1;
+ (id)phaObjectNotFoundErrorForAssetLocalIdentifier:(id)arg1;
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaResourceNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)_safari_enumerateCloudKitErrorsWithBlock:(id /* block */)arg1;
- (bool)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(long long)arg1;
- (bool)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1;
- (bool)safari_isClientSideNetworkError;
- (id)safari_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (bool)pc_isDCErrorWithCode:(long long)arg1;
- (bool)pc_isNSCocoaErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks

+ (id)st_startWorkoutErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)isSiriUISnippetPluginError;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (bool)sbf_isFileNotFoundError;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib

- (long long)_code;
- (id)_domain;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 underlyingError:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsuErrorWithCode:(long long)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;

- (bool)isCancelError;
- (bool)isOutOfSpaceError;
- (id)localizedAlertMessage;
- (id)localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;

- (bool)isConnectivityError;
- (bool)isEqualToError:(id)arg1;
- (bool)isExpiredPasswordError;
- (bool)isInvalidSubscriberError;
- (bool)isNewPasswordError;
- (bool)isPasswordMismatchError;
- (bool)isSecurityError;
- (bool)isServerError;
- (bool)isStreamDomain:(long long)arg1 error:(int)arg2;
- (bool)shouldPresentErrorForTaskType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_errorWithCode:(unsigned long long)arg1;
+ (id)wf_errorWithCode:(unsigned long long)arg1 encapsulatedError:(id)arg2 userInfo:(id)arg3;
+ (id)wf_errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp

- (id)failingURL;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)_webUI_WebUIErrorWithCode:(unsigned long long)arg1 URL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

- (bool)wk_representsTransientConnectivityIssueForAttempt:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)errorBySettingFatalError:(bool)arg1;
- (bool)isEqual:(id)arg1 compareUserInfo:(bool)arg2;
- (bool)isFatalError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsa_errorWithCode:(long long)arg1;
+ (id)tsk_errorWithTSKWarning:(id)arg1;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (bool)tsa_isCollaborationError;
- (bool)tsp_isDocumentTooNewError;
- (bool)tsp_isRecoverable;
- (int)tsu_IOErrorNumber;
- (bool)tsu_isCancelError;
- (bool)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /usr/lib/libprequelite.dylib

+ (id)errorForDB:(struct sqlite3 { }*)arg1;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 stmt:(struct sqlite3_stmt { }*)arg2;
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;

- (long long)extendedSqliteCode;
- (bool)isSqliteErrorCode:(long long)arg1;
- (id)sqliteStatement;

@end
