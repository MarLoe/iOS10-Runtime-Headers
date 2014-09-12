/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOBusiness, NSMutableDictionary, NSString, MKYelpDeal;

@interface MKMapItemMetadata : NSObject  {
    bool_hasCheckedForYelpDeal;
    GEOBusiness *_business;
    MKYelpDeal *_yelpDeal;
    NSMutableDictionary *_imageCache;
}

@property(readonly) GEOBusiness * business;
@property(retain) MKYelpDeal * yelpDeal;
@property bool hasCheckedForYelpDeal;
@property(readonly) NSString * yelpID;
@property(retain) NSMutableDictionary * imageCache;


- (void)setImageCache:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)initWithBusiness:(id)arg1;
- (id)yelpDeal;
- (void)setHasCheckedForYelpDeal:(bool)arg1;
- (void)setYelpDeal:(id)arg1;
- (bool)hasCheckedForYelpDeal;
- (id)yelpID;
- (id)business;
- (id)imageForURL:(id)arg1;
- (id)imageCache;
- (void).cxx_destruct;

@end