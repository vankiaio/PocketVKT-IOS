//
//  Get_pocketvkt_info_request.m
//  pocketVKT
//
//  Created by vankiachain on 2018/10/31.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "Get_pocketvkt_info_request.h"

@implementation Get_pocketvkt_info_request

-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/get_pocketvkt_info", REQUEST_PERSONAL_BASEURL];
}

@end
