/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleCALayer : CALayer  {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer {} *x1; id x2; unsigned char x3; unsigned char x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; unsigned char x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; unsigned char x8; unsigned char x9; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_10_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_10_1_2; } x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; unsigned char x12; id x13; struct OpaqueFigSubtitleRenderer {} *x14; struct __CFDictionary {} *x15; unsigned char x16; unsigned char x17; struct __CFDictionary {} *x18; struct __CFArray {} *x19; struct __CFArray {} *x20; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_21_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_21_1_2; } x21; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_22_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_22_1_2; } x22; unsigned char x23; boolx24; unsigned char x25; } *layerInternal;
}

@property(getter=isOverscanSubtitleSupportEnabled) bool overscanSubtitleSupportEnabled;

+ (id)defaultActionForKey:(id)arg1;

- (id)subtitleLayerDisplay;
- (void)endUpdate;
- (void)beginUpdate;
- (void)handleNeedsLayoutNotification;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeAnimations;
- (void)addAnimations:(void*)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)clear;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end