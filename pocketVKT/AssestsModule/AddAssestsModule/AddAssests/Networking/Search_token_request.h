//
//  Search_token_request.h
//  pocketVKT
//
//  Created by vankiachain on 2018/7/18.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface Search_token_request : BaseNetworkRequest

/**
 搜索的关键字
 */
@property(nonatomic , copy) NSString *key;


/**
 accountName
 */
@property(nonatomic , copy) NSString *accountName;

@end
