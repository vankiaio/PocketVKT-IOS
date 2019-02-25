//
//  Get_token_info_service.h
//  pocketVKT
//
//  Created by vankiachain on 2018/7/19.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseService.h"
#import "Get_token_info_request.h"

@interface Get_token_info_service : BaseService
@property(nonatomic , strong) Get_token_info_request *get_token_info_request;

- (void)get_token_info:(CompleteBlock)complete;
@end
