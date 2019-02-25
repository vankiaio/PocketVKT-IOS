//
//  BaseCollectionViewCell.m
//  pocketVKT
//
//  Created by vankiachain on 17/05/2018.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseCollectionViewCell.h"

@implementation BaseCollectionViewCell
-(instancetype)initWithFrame:(CGRect)frame{
    if (self = [super initWithFrame:frame]) {
        self.contentView.lee_theme.LeeConfigBackgroundColor(@"baseView_background_color");
        
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    self.contentView.lee_theme.LeeConfigBackgroundColor(@"baseView_background_color");
}

@end
