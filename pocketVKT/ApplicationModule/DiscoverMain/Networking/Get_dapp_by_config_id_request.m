//
//  Get_dapp_by_config_id_request.m
//  pocketVKT
//
//  Created by vankiachain on 2018/11/1.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "Get_dapp_by_config_id_request.h"

@implementation Get_dapp_by_config_id_request
-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/get_dapp_by_config_id?id=%@", REQUEST_PERSONAL_BASEURL, self.config_id];
}

@end
