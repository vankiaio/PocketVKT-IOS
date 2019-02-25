//
//  VoteProducers_Abi_json_to_bin_request.h
//  pocketVKT
//
//  Created by vankiachain on 2018/6/11.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface VoteProducers_Abi_json_to_bin_request : BaseHttpsNetworkRequest
@property(nonatomic, copy) NSString *code;
@property(nonatomic, copy) NSString *action;
@property(nonatomic, copy) NSString *voter;
@property(nonatomic, copy) NSString *proxy;
@property(nonatomic , strong) NSMutableArray *producers;
@end
