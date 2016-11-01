/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBehavior : NSObject {
    bool  _canCreateSources;
    bool  _hasTelephonyCapability;
    NSString * _hostReadAuthorizationUsageDescription;
    NSString * _hostWriteAuthorizationUsageDescription;
    bool  _isAppleInternalInstall;
    bool  _isAppleWatch;
    bool  _isCoachingEventLoggingEnabled;
    bool  _isCompanionCapable;
    bool  _isDeviceSupported;
    bool  _isTestingDevice;
    NSNumber * _overridenAreSwimmingSessionsAvailable;
    bool  _requestsRemoteAuthorization;
    bool  _shouldPruneOldSamples;
}

@property (nonatomic) bool areSwimmingSessionsAvailable;
@property (nonatomic) bool canCreateSources;
@property (nonatomic, readonly, copy) NSString *currentDeviceClass;
@property (nonatomic, readonly, copy) NSString *currentDeviceDisplayName;
@property (nonatomic, readonly, copy) NSString *currentDeviceManufacturer;
@property (nonatomic, readonly, copy) NSString *currentDeviceName;
@property (nonatomic, readonly, copy) NSString *currentDeviceProductType;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly, copy) NSString *currentInternalDeviceModel;
@property (nonatomic, readonly, copy) NSString *currentOSBuild;
@property (nonatomic, readonly, copy) NSString *currentOSVersion;
@property (nonatomic) bool hasTelephonyCapability;
@property (nonatomic, copy) NSString *hostReadAuthorizationUsageDescription;
@property (nonatomic, copy) NSString *hostWriteAuthorizationUsageDescription;
@property (nonatomic) bool isAppleInternalInstall;
@property (nonatomic) bool isAppleWatch;
@property (nonatomic) bool isCoachingEventLoggingEnabled;
@property (nonatomic) bool isCompanionCapable;
@property (nonatomic) bool isDeviceSupported;
@property (nonatomic) bool isTestingDevice;
@property (nonatomic, readonly, copy) NSTimeZone *localTimeZone;
@property (nonatomic) bool requestsRemoteAuthorization;
@property (nonatomic) bool shouldPruneOldSamples;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;

+ (bool)_hasCompletedBuddy;
+ (bool)_hasTelephonyCapability;
+ (bool)_isAppleInternalInstall;
+ (bool)_isDeviceSupported;
+ (bool)_isForceBuddyEnabled;
+ (bool)_isSkipBuddyEnabled;
+ (bool)_shouldShowBuddy;
+ (bool)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (id)behaviorQueue;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentOSBuild;
+ (id)currentOSVersion;
+ (void)disableForceBuddy;
+ (void)disableSkipBuddy;
+ (bool)hasCompletedBuddy;
+ (bool)hasPairedWatch;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleInternalInstall;
+ (bool)isCompanionCapable;
+ (bool)isDeviceSupported;
+ (bool)isRunningStoreDemoMode;
+ (bool)isTestingDevice;
+ (int)protocolVersionForNRDevice:(id)arg1;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (bool)shouldShowBuddy;

- (void).cxx_destruct;
- (bool)areSwimmingSessionsAvailable;
- (bool)canCreateSources;
- (id)currentDeviceClass;
- (id)currentDeviceDisplayName;
- (id)currentDeviceManufacturer;
- (id)currentDeviceName;
- (id)currentDeviceProductType;
- (unsigned long long)currentDiskSpaceAvailable;
- (id)currentDiskUsage;
- (id)currentInternalDeviceModel;
- (id)currentOSBuild;
- (id)currentOSVersion;
- (bool)hasTelephonyCapability;
- (id)hostReadAuthorizationUsageDescription;
- (id)hostWriteAuthorizationUsageDescription;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isAppleWatch;
- (bool)isCoachingEventLoggingEnabled;
- (bool)isCompanionCapable;
- (bool)isDeviceSupported;
- (bool)isTestingDevice;
- (id)localTimeZone;
- (bool)requestsRemoteAuthorization;
- (void)setAreSwimmingSessionsAvailable:(bool)arg1;
- (void)setCanCreateSources:(bool)arg1;
- (void)setHasTelephonyCapability:(bool)arg1;
- (void)setHostReadAuthorizationUsageDescription:(id)arg1;
- (void)setHostWriteAuthorizationUsageDescription:(id)arg1;
- (void)setIsAppleInternalInstall:(bool)arg1;
- (void)setIsAppleWatch:(bool)arg1;
- (void)setIsCoachingEventLoggingEnabled:(bool)arg1;
- (void)setIsCompanionCapable:(bool)arg1;
- (void)setIsDeviceSupported:(bool)arg1;
- (void)setIsTestingDevice:(bool)arg1;
- (void)setRequestsRemoteAuthorization:(bool)arg1;
- (void)setShouldPruneOldSamples:(bool)arg1;
- (bool)shouldPruneOldSamples;
- (unsigned long long)totalDiskCapacity;

@end
