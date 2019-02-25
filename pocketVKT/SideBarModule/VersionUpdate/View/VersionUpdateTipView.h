//
//  VersionUpdateTipView.h
//  pocketVKT
//
//  Created by vankiachain on 19/04/2018.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VersionUpdateModel.h"

@protocol VersionUpdateTipViewDelegate<NSObject>
- (void)skipBtnDidClick:(UIButton *)sender;
- (void)updateBtnDidClick:(UIButton *)sender;
@end


@interface VersionUpdateTipView : UIView
@property(nonatomic , strong) VersionUpdateModel *model;

@property(nonatomic, weak) id<VersionUpdateTipViewDelegate> delegate;

@end
