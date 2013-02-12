/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIActivityIndicatorView, UILabel;

@interface GKWebTitleView : UIView {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_titleLabel;
}

@property(retain) UIActivityIndicatorView * progressIndicator;
@property(retain) UILabel * titleLabel;

- (void)dealloc;
- (float)desiredWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)sizeToFit;
- (void)startAnimating;
- (void)stopAnimating;
- (id)titleLabel;
- (void)willMoveToSuperview:(id)arg1;

@end