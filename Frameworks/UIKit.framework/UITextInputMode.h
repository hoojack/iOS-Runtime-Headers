/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *primaryLanguage;

+ (id)activeInputModes;
+ (id)currentInputMode;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primaryLanguage;

@end
