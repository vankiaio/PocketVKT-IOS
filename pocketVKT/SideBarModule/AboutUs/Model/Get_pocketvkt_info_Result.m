//
//  Get_pocketvkt_info_Result.m
//  pocketVKT
//
//  Created by vankiachain on 2018/11/1.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "Get_pocketvkt_info_Result.h"

@implementation Get_pocketvkt_info_Result

+(NSDictionary *)mj_replacedKeyFromPropertyName{
    return @{
             @"weChatOfficialAccount":@"data.weChatOfficialAccount",
             @"weChat":@"data.weChat",
             @"officialWebsite":@"data.officialWebsite",
             @"companyProfile":@"data.companyProfile"
             };
}

@end
