//
//  ChangePasswordView.h
//  pocketVKT
//
//  Created by vankiachain on 2018/2/25.
//  Copyright © 2018年 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ChangePasswordViewDelegate<NSObject>
- (void)cancleBtnDidClick:(UIButton *)sender;
- (void)confirmPasswordBtnDidClick:(UIButton *)sender;
@end

@interface ChangePasswordView : UIView
@property (weak, nonatomic) IBOutlet UITextField *oraginalPasswordTF;
@property (weak, nonatomic) IBOutlet UITextField *inputNewPasswordTF;
@property (weak, nonatomic) IBOutlet UITextField *confirmPasswordTF;
@property(nonatomic, weak) id<ChangePasswordViewDelegate> delegate;
@end
