//
//  Get_token_info_request.h
//  pocketVKT
//
//  Created by vankiachain on 2018/7/19.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface Get_token_info_request : BaseNetworkRequest

@property(nonatomic, strong) NSString *accountName;

@property(nonatomic , strong) NSMutableArray *ids;

@end
