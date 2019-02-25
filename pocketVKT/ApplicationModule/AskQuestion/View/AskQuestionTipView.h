//
//  AskQuestionTipView.h
//  pocketVKT
//
//  Created by vankiachain on 29/03/2018.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AskQuestionTipViewDelegate<NSObject>
- (void)askQuestionTipViewCancleBtnDidClick:(UIButton *)sender;
- (void)askQuestionTipViewConfirmBtnDidClick:(UIButton *)sender;
@end


@interface AskQuestionTipView : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property(nonatomic, weak) id<AskQuestionTipViewDelegate> delegate;
@end
