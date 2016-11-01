/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinBoardNotificationServiceGroup : NSObject <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    NSSet * _associatedServiceUUIDs;
    NSArray * _associatedServices;
    NSHashTable * _associatedServicesTable;
    HMDBulletinBoardNotification * _bulletinBoardNotification;
    NSSet * _cameraProfileUUIDs;
    NSArray * _cameraProfiles;
    NSHashTable * _cameraProfilesTable;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _targetUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSSet *associatedServiceUUIDs;
@property (nonatomic, retain) NSArray *associatedServices;
@property (nonatomic, readonly, copy) NSHashTable *associatedServicesTable;
@property (nonatomic, readonly) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, retain) NSSet *cameraProfileUUIDs;
@property (nonatomic, retain) NSArray *cameraProfiles;
@property (nonatomic, readonly, copy) NSHashTable *cameraProfilesTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_cameraProfileWithID:(id)arg1;
- (id)_gatherServices;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;
- (bool)_isAlarmService:(id)arg1;
- (bool)_isNotificationGeneratingService:(id)arg1;
- (bool)_isSupportedAssociationService:(id)arg1;
- (id)_prepareServiceGroupPayload;
- (void)_registerNotificationHandlers;
- (void)_sendNotification:(id)arg1;
- (id)_updateAssociatedService:(id)arg1 associatedCameras:(id)arg2;
- (void)_updateAssociatedServicesTable:(id)arg1;
- (void)_updateCameraProfilesTable:(id)arg1;
- (id)actionContextForCameraProfileID:(id)arg1;
- (id)associatedServiceUUIDs;
- (id)associatedServices;
- (id)associatedServicesTable;
- (id)bulletinBoardNotification;
- (id)cameraProfileUUIDs;
- (id)cameraProfiles;
- (id)cameraProfilesTable;
- (void)configureBulletinNotification:(id /* block */)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setAssociatedServiceUUIDs:(id)arg1;
- (void)setAssociatedServices:(id)arg1;
- (void)setAssociatedServicesTable:(id)arg1;
- (void)setCameraProfileUUIDs:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setCameraProfilesTable:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)targetUUID;
- (id)workQueue;

@end
