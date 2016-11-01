/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal * _internal;
}

@property (nonatomic, readonly) long long autoFocusSystem;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (getter=isVideoBinned, nonatomic, readonly) bool videoBinned;
@property (nonatomic, readonly) float videoFieldOfView;
@property (getter=isVideoHDRSupported, nonatomic, readonly) bool videoHDRSupported;
@property (nonatomic, readonly) double videoMaxZoomFactor;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) bool videoStabilizationSupported;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (long long)autoFocusSystem;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (id)description;
- (id)figCaptureSourceFormat;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isHighResPhotoFormat;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isPhotoFormat;
- (bool)isSISSupported;
- (bool)isShallowDepthOfFieldEffectSupported;
- (bool)isVideoBinned;
- (bool)isVideoHDRSupported;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)isVideoStabilizationSupported;
- (bool)isWideColorSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (bool)needsPhotoPreviewDPCC;
- (bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (id)supportedColorSpaces;
- (int)supportedFormatsArrayIndex;
- (unsigned int)supportedRawPixelFormat;
- (int)supportedStabilizationMethod;
- (bool)supportsDynamicCrop;
- (bool)supportsHighProfileH264;
- (bool)supportsHighResolutionStillImageOutput;
- (bool)supportsLowLightBoost;
- (bool)supportsQuadraHighResolutionStillImageOutput;
- (float)videoFieldOfView;
- (double)videoMaxZoomFactor;
- (id)videoSupportedFrameRateRanges;
- (double)videoZoomFactorUpscaleThreshold;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (struct { int x1; int x2; })_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (double)_framesPerSecondForVideoConfiguration:(long long)arg1;
- (long long)cam_compareUsingDimensions:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cam_frameDurationForVideoConfiguration:(long long)arg1;
- (bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (bool)cam_supportsVideoConfiguration:(long long)arg1;

@end
