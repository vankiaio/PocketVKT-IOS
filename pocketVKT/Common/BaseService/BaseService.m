//
//  BaseService.m
//  pocketVKT
//
//  Created by vankiachain on 2017/11/30.
//  Copyright © 2017年 vankiachain. All rights reserved.
//

#import "BaseService.h"

@implementation BaseService

- (NSMutableArray *)responseArray{
    if (!_responseArray) {
        _responseArray = [[NSMutableArray alloc] init];
    }
    return _responseArray;
}

- (NSMutableArray *)dataSourceArray{
    if (!_dataSourceArray) {
        _dataSourceArray = [[NSMutableArray alloc] init];
    }
    return _dataSourceArray;
}

- (void)buildDataSource:(CompleteBlock)complete{}



@end
