//
//  QuestionDetailViewController.h
//  pocketVKT
//
//  Created by vankiachain on 2018/2/5.
//  Copyright © 2018年 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Question;



@interface QuestionDetailViewController : UIViewController
@property(nonatomic, strong) Question *question;
@property(nonatomic, strong) NSString *choosedAccountName;
@end
