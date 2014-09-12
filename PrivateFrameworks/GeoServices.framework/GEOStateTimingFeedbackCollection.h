/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _durationInOldState;
    NSMutableArray *_stateTransitions;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int durationInOldState : 1; 
    } _has;
}

@property bool hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(retain) NSMutableArray * stateTransitions;
@property bool hasDurationInOldState;
@property double durationInOldState;


- (void)setStateTransitions:(id)arg1;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (void)setHasDurationInOldState:(bool)arg1;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;
- (void)clearStateTransitions;
- (unsigned long long)stateTransitionsCount;
- (void)setDurationInOldState:(double)arg1;
- (void)addStateTransition:(id)arg1;
- (bool)hasSessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)stateTransitions;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end