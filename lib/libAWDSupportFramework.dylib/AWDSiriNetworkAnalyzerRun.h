/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {
    unsigned long long _gatewayPingDuration;
    unsigned long long _knownURLLoadDuration;
    unsigned long long _siriSaltURLLoadDuration;
    unsigned long long _siriURLLoadDuration;
    unsigned long long _timestamp;
    unsigned int _gatewayPingsDropped;
    unsigned int _gatewayPingsSent;
    int _gatewayStatus;
    int _interface;
    int _sendBufferBytesRemaining;
    bool_analyzingSuccessfulRetry;
    bool_isUserRequest;
    bool_wwanPreferred;
    struct { 
        unsigned int gatewayPingDuration : 1; 
        unsigned int knownURLLoadDuration : 1; 
        unsigned int siriSaltURLLoadDuration : 1; 
        unsigned int siriURLLoadDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int gatewayPingsDropped : 1; 
        unsigned int gatewayPingsSent : 1; 
        unsigned int gatewayStatus : 1; 
        unsigned int interface : 1; 
        unsigned int sendBufferBytesRemaining : 1; 
        unsigned int analyzingSuccessfulRetry : 1; 
        unsigned int isUserRequest : 1; 
        unsigned int wwanPreferred : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasInterface;
@property int interface;
@property bool hasIsUserRequest;
@property bool isUserRequest;
@property bool hasAnalyzingSuccessfulRetry;
@property bool analyzingSuccessfulRetry;
@property bool hasWwanPreferred;
@property bool wwanPreferred;
@property bool hasSendBufferBytesRemaining;
@property int sendBufferBytesRemaining;
@property bool hasKnownURLLoadDuration;
@property unsigned long long knownURLLoadDuration;
@property bool hasSiriURLLoadDuration;
@property unsigned long long siriURLLoadDuration;
@property bool hasSiriSaltURLLoadDuration;
@property unsigned long long siriSaltURLLoadDuration;
@property bool hasGatewayStatus;
@property int gatewayStatus;
@property bool hasGatewayPingDuration;
@property unsigned long long gatewayPingDuration;
@property bool hasGatewayPingsSent;
@property unsigned int gatewayPingsSent;
@property bool hasGatewayPingsDropped;
@property unsigned int gatewayPingsDropped;


- (unsigned int)gatewayPingsDropped;
- (unsigned int)gatewayPingsSent;
- (unsigned long long)gatewayPingDuration;
- (int)gatewayStatus;
- (unsigned long long)siriSaltURLLoadDuration;
- (unsigned long long)siriURLLoadDuration;
- (unsigned long long)knownURLLoadDuration;
- (int)sendBufferBytesRemaining;
- (bool)wwanPreferred;
- (bool)analyzingSuccessfulRetry;
- (bool)isUserRequest;
- (bool)hasGatewayPingsDropped;
- (void)setHasGatewayPingsDropped:(bool)arg1;
- (void)setGatewayPingsDropped:(unsigned int)arg1;
- (bool)hasGatewayPingsSent;
- (void)setHasGatewayPingsSent:(bool)arg1;
- (void)setGatewayPingsSent:(unsigned int)arg1;
- (bool)hasGatewayPingDuration;
- (void)setHasGatewayPingDuration:(bool)arg1;
- (void)setGatewayPingDuration:(unsigned long long)arg1;
- (bool)hasGatewayStatus;
- (void)setHasGatewayStatus:(bool)arg1;
- (void)setGatewayStatus:(int)arg1;
- (bool)hasSiriSaltURLLoadDuration;
- (void)setHasSiriSaltURLLoadDuration:(bool)arg1;
- (void)setSiriSaltURLLoadDuration:(unsigned long long)arg1;
- (bool)hasSiriURLLoadDuration;
- (void)setHasSiriURLLoadDuration:(bool)arg1;
- (void)setSiriURLLoadDuration:(unsigned long long)arg1;
- (bool)hasKnownURLLoadDuration;
- (void)setHasKnownURLLoadDuration:(bool)arg1;
- (void)setKnownURLLoadDuration:(unsigned long long)arg1;
- (bool)hasSendBufferBytesRemaining;
- (void)setHasSendBufferBytesRemaining:(bool)arg1;
- (void)setSendBufferBytesRemaining:(int)arg1;
- (bool)hasWwanPreferred;
- (void)setHasWwanPreferred:(bool)arg1;
- (void)setWwanPreferred:(bool)arg1;
- (bool)hasAnalyzingSuccessfulRetry;
- (void)setHasAnalyzingSuccessfulRetry:(bool)arg1;
- (void)setAnalyzingSuccessfulRetry:(bool)arg1;
- (bool)hasIsUserRequest;
- (void)setHasIsUserRequest:(bool)arg1;
- (void)setIsUserRequest:(bool)arg1;
- (bool)hasInterface;
- (void)setHasInterface:(bool)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInterface:(int)arg1;
- (int)interface;
- (id)dictionaryRepresentation;

@end