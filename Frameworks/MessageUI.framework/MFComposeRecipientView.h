/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIView;



@interface MFComposeRecipientView : UIView 
{
    UIView *_recipientView;
}

+ (float)defaultHeight;

- (void)setLabel:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)clearText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)recipientView;
- (void)_initCommon:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeAddresses;
- (id)addresses;

@end