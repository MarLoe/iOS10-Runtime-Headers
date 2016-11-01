/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticSequence : NSObject {
    double  _lastStartTime;
    bool  _loopIsEnabled;
    AVHapticPlayer * _player;
    unsigned long long  _seqID;
}

@property double lastStartTime;
@property bool loopingEnabled;
@property AVHapticPlayer *player;
@property unsigned long long seqID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (double)lastStartTime;
- (bool)loopingEnabled;
- (bool)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3;
- (id)player;
- (bool)prepareToPlayAndReturnError:(id*)arg1;
- (unsigned long long)seqID;
- (void)setLastStartTime:(double)arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (bool)setLoopingEnabled:(bool)arg1 error:(id*)arg2;
- (void)setPlayer:(id)arg1;
- (void)setSeqID:(unsigned long long)arg1;
- (bool)stopAtTime:(double)arg1 error:(id*)arg2;

@end
