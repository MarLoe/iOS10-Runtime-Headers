/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIMipmapBlur : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputLevel;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputLevel;

+ (id)customAttributes;

- (id)inputLevel;
- (void)setInputLevel:(id)arg1;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end