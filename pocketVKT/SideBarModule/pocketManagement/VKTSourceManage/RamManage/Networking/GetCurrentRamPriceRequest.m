//
//  GetCurrentRamPriceRequest.m
//  pocketVKT
//
//  Created by vankiachain on 2018/10/29.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "GetCurrentRamPriceRequest.h"

@implementation GetCurrentRamPriceRequest


-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/vktDataConditionSearchRam/GetRamTrades", REQUEST_HISTORY_HTTP];
}


@end
