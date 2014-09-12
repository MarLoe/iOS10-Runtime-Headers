/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilities : NSObject  {
}

+ (void)invalidateCachedValues;
+ (void)_setRelayCallingEnabledDefault:(bool)arg1;
+ (void)_setCanEnableRelayCallingDefault:(bool)arg1;
+ (void)_setSupportsRelayCallingDefault:(bool)arg1;
+ (bool)canEnableRelayCalling;
+ (void)_initializeState;
+ (id)wiFiCallingCapabilityInformation;
+ (void)setWiFiCallingEnabled:(bool)arg1;
+ (bool)supportsSimultaneousVoiceAndData;
+ (bool)supportsFaceTimeVideoCalls;
+ (bool)supportsFaceTimeAudioCalls;
+ (void)setWiFiCallingCapabilityInformation:(id)arg1;
+ (void)_tearDownCTCapabilitiesNotifications;
+ (void)_tearDownRelayCallingListeners;
+ (bool)supportsRelayCalling;
+ (void)setRelayCallingEnabled:(bool)arg1;
+ (bool)_relayCallingEnabledDefault;
+ (bool)_canEnableRelayCallingDefault;
+ (bool)_supportsRelayCallingDefault;
+ (void)_sendNecessaryNotificationsAfterRunningBlock:(id)arg1;
+ (void)_setUpRelayCallingListeners;
+ (bool)isWiFiCallingCurrentlyAvailable;
+ (bool)canEnableWiFiCalling;
+ (struct __CTServerConnection { }*)_createServerConnection;
+ (bool)isWiFiCallingEnabled;
+ (void)_initializeCTCapabilitiesSupport;
+ (void)_setUpCTCapabilitiesNotifications;
+ (bool)supportsHostingFaceTimeVideoCalls;
+ (bool)supportsHostingFaceTimeAudioCalls;
+ (bool)supportsHostingTelephonyCalls;
+ (bool)supportsDisplayingFaceTimeVideoCalls;
+ (int)faceTimeVideoCallSupport;
+ (int)faceTimeAudioCallSupport;
+ (bool)supportsDisplayingTelephonyCalls;
+ (int)telephonyCallSupport;
+ (bool)isRelayCallingEnabled;
+ (bool)supportsDisplayingFaceTimeAudioCalls;
+ (bool)supportsTelephonyCalls;


@end