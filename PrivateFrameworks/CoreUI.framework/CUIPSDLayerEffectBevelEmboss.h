/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent  {
    unsigned long long _blurSize;
    unsigned long long _softenSize;
    short _angle;
    unsigned long long _altitude;
    unsigned int _direction;
    int _highlightBlendMode;
    CUIColor *_highlightColor;
    double _highlightOpacity;
    int _shadowBlendMode;
    CUIColor *_shadowColor;
    double _shadowOpacity;
}

@property unsigned long long blurSize;
@property unsigned long long softenSize;
@property short angle;
@property unsigned long long altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property(retain) CUIColor * highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property(retain) CUIColor * shadowColor;
@property double shadowOpacity;


- (void)setDirection:(unsigned int)arg1;
- (unsigned int)direction;
- (void)setShadowOpacity:(double)arg1;
- (unsigned long long)altitude;
- (id)shadowColor;
- (double)shadowOpacity;
- (unsigned int)effectType;
- (double)highlightOpacity;
- (unsigned long long)softenSize;
- (int)shadowBlendMode;
- (int)highlightBlendMode;
- (id)highlightColor;
- (short)angle;
- (unsigned long long)blurSize;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (void)setShadowBlendMode:(int)arg1;
- (void)setHighlightOpacity:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightBlendMode:(int)arg1;
- (void)setAltitude:(unsigned long long)arg1;
- (void)setSoftenSize:(unsigned long long)arg1;
- (void)setAngle:(short)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setShadowColor:(id)arg1;
- (id)init;
- (void)dealloc;

@end