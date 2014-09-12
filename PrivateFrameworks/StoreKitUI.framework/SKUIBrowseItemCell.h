/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface SKUIBrowseItemCell : UICollectionViewCell  {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_borderView;
    UIView *_topBorderView;
    UIImageView *_decorationImageView;
    UIImage *_decorationImage;
    bool_showTopBorder;
    bool_hasBlueBackgroundWhenSelected;
}

@property(retain) NSString * title;
@property(retain) NSString * subtitle;
@property(retain) UIImage * decorationImage;
@property bool showTopBorder;
@property bool hasBlueBackgroundWhenSelected;


- (void)setHasBlueBackgroundWhenSelected:(bool)arg1;
- (bool)hasBlueBackgroundWhenSelected;
- (bool)showTopBorder;
- (id)decorationImage;
- (void)setShowTopBorder:(bool)arg1;
- (void)setDecorationImage:(id)arg1;
- (void)_reloadHighlightState;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setSelected:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)layoutSubviews;

@end