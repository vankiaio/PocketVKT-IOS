//
//  ApplicationCollectionViewCell.h
//  pocketVKT
//
//  Created by vankiachain on 2017/12/15.
//  Copyright © 2017年 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseTableViewCell.h"
#import "DappModel.h"
@class Application;
@interface ApplicationCollectionViewCell : BaseTableViewCell

@property(nonatomic, strong) UIImageView *img;
@property(nonatomic, strong) BaseLabel *titleLabel;
@property(nonatomic, strong) UILabel *descriptionLabel;






@property(nonatomic , strong) DappModel *model;


//@property(nonatomic , strong) Application *model;

@end
