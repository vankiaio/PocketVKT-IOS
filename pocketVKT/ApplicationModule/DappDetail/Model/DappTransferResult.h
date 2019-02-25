//
//  DappTransferResult.h
//  pocketVKT
//
//  Created by vankiachain on 2018/5/29.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DappTransferResult : NSObject
@property(nonatomic , copy) NSString *message;
@property(nonatomic , copy) NSString *serialNumber;
// contract invoke
@property(nonatomic , copy) NSString *contract;
@property(nonatomic , copy) NSString *action;

@end
