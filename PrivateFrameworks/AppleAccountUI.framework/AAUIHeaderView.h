/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIHeaderView : AAUIBuddyView {
    UILabel * _messageLabel;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateLabelFonts;
- (void)_updateStackViewSpacing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
