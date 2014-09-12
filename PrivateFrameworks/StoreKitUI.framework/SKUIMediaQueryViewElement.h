/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, MPMediaQuery, NSMutableDictionary;

@interface SKUIMediaQueryViewElement : SKUIViewElement  {
    NSString *_cellFactoryFunctionName;
    MPMediaQuery *_mediaQuery;
    long long _mediaQueryStyle;
    NSMutableDictionary *_propertyAggregrateFunctions;
}

@property(readonly) MPMediaQuery * mediaQuery;
@property(readonly) long long mediaQueryStyle;
@property(readonly) NSString * cellFactoryFunctionName;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)factoryRepresentationWithMediaEntity:(id)arg1;
- (id)cellFactoryFunctionName;
- (long long)mediaQueryStyle;
- (id)mediaQuery;
- (long long)pageComponentType;
- (void).cxx_destruct;

@end