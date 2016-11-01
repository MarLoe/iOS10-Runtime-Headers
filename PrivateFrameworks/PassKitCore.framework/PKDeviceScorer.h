/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceScorer : NSObject {
    PKDSPContext * _context;
}

@property (nonatomic, readonly, copy) PKDSPContext *context;

+ (bool)deviceScoringSupported;

- (void).cxx_destruct;
- (id)context;
- (void)deviceScoreWithNonce:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)scorerWithNonce:(id)arg1;

@end
