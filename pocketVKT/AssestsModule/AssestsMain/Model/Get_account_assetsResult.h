//
//  Get_account_assetsResult.h
//  pocketVKT
//
//  Created by vankiachain on 2018/10/20.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface Get_account_assetsResult : BaseResult

@property(nonatomic , strong) NSArray *user_asset_list;

@end

NS_ASSUME_NONNULL_END
