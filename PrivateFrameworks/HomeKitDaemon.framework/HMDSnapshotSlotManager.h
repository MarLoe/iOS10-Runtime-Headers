/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotSlotManager : NSObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSMutableArray * _filesToCleanup;
    NSString * _imageCacheDirectory;
    NSString * _logID;
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    CAContext * _snapshotContext;
    NSMapTable * _snapshotSlots;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *filesToCleanup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, retain) HMDSnapshotFile *mostRecentSnapshot;
@property (getter=isMostRecentSnapshotValid, nonatomic, readonly) bool mostRecentSnapshotValid;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) CAContext *snapshotContext;
@property (nonatomic, readonly) NSMapTable *snapshotSlots;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateMostRecentSnapshot:(id)arg1 updateGenerationCounter:(bool)arg2;
- (id)accessory;
- (id)addReferenceToMostRecentSnapshotFileForMessage:(id)arg1;
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 updateGenerationCounter:(bool)arg3;
- (void)dealloc;
- (id)filesToCleanup;
- (void)findMostRecentSnapshot;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)handleReleaseSnapshot:(id)arg1;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6;
- (bool)isMostRecentSnapshotValid;
- (id)logID;
- (id)logIdentifier;
- (id)mostRecentSnapshot;
- (id)msgDispatcher;
- (id)notificationRegistration;
- (id)payloadForSnapshotFile:(id)arg1;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSnapshotContext:(id)arg1;
- (void)setupMostRecentSnapshot;
- (id)snapshotContext;
- (id)snapshotSlots;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
