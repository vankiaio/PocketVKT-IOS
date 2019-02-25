//
//  ImageAndTipLabelViewManager.h
//  pocketVKT
//
//  Created by vankiachain on 2018/5/31.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#define IMAGE_TIP_LABEL_MANAGER [ImageAndTipLabelViewManager shareManager]

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ImageAndTipLabelViewManager : NSObject
+(ImageAndTipLabelViewManager *)shareManager;

/**
 *  显示页面
 */
- (void)showImageAddTipLabelViewWithSocial_Mode_ImageName:(NSString *)imageName andBlackbox_Mode_ImageName:(NSString *)imageName_BB andTitleStr:(NSString *)titleStr toView:(UIView *)parentView andViewController:(UIViewController *) viewController;

/**
 *  移除页面
 */
- (void)removeImageAndTipLabelViewManager;
@end
