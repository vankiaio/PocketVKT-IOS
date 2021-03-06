//
//  ExcuteMutipleActionsGetRequiredPublicKeyRequest.m
//  pocketVKT
//
//  Created by vankiachain on 2018/8/13.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "ExcuteMutipleActionsGetRequiredPublicKeyRequest.h"

@implementation ExcuteMutipleActionsGetRequiredPublicKeyRequest

-(NSString *)requestUrlPath{
    return @"/get_required_keys";
}

-(NSDictionary *)parameters{
    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    
    NSMutableDictionary *transacDic = [NSMutableDictionary dictionary];
    [transacDic setObject:VALIDATE_STRING(self.ref_block_prefix) forKey:@"ref_block_prefix"];
    [transacDic setObject:VALIDATE_STRING(self.ref_block_num) forKey:@"ref_block_num"];
    [transacDic setObject:VALIDATE_STRING(self.expiration) forKey:@"expiration"];
    
    [transacDic setObject:@[] forKey:@"context_free_data"];
    [transacDic setObject:@[] forKey:@"signatures"];
    [transacDic setObject:@[] forKey:@"context_free_actions"];
    [transacDic setObject:@0 forKey:@"delay_sec"];
    [transacDic setObject:@0 forKey:@"max_kcpu_usage"];
    [transacDic setObject:@0 forKey:@"max_net_usage_words"];
    
    NSMutableArray *actionsArr = [NSMutableArray array];
    for (int i = 0 ; i < self.excuteActionsArray.count; i++) {
        ExcuteActions *action = self.excuteActionsArray[i];
        NSMutableDictionary *actionDict = [NSMutableDictionary dictionary];
        [actionDict setObject:VALIDATE_STRING(action.account) forKey:@"account"];
        [actionDict setObject:VALIDATE_STRING(action.name) forKey:@"name"];
        [actionDict setObject:VALIDATE_STRING(action.binargs) forKey:@"data"];
        [actionDict setObject:VALIDATE_ARRAY(action.authorization) forKey:@"authorization"];
        [actionsArr addObject:actionDict];
    }
    
    [transacDic setObject:VALIDATE_ARRAY(actionsArr) forKey:@"actions"];
    
    [params setObject:transacDic forKey:@"transaction"];
    
    NSMutableArray *available_keysArr = [NSMutableArray array];
    for (NSString *publicKey in self.available_keys) {
        if ([publicKey hasPrefix:@"VKT"]) {
            [available_keysArr addObject: publicKey];
        }
    }
    [params setObject:VALIDATE_ARRAY(available_keysArr) forKey:@"available_keys"];
    
    return params;
}


@end
