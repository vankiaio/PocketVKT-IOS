//
//  ImportAccountViewController.h
//  pocketVKT
//
//  Created by vankiachain on 2017/12/12.
//  Copyright © 2017年 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AccountPrivateKeyQRCodeModel.h"

@interface ImportAccountViewController : BaseViewController
@property(nonatomic, strong) AccountPrivateKeyQRCodeModel *model;
@end
