/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance  {
    UITraitCollection *_traitCollection;
}

+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (bool)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;

- (void)dealloc;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (bool)_isValidAppearanceForCustomizableObject:(id)arg1;

@end