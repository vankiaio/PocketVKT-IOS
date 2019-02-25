//
//  AuthResult.h
//  pocketVKT
//
//  Created by vankiachain on 2018/1/23.
//  Copyright © 2018年 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 短信验证码验证结果
 */
@class Wallet;
@interface AuthResult : NSObject

@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSString *message;
@property(nonatomic, strong) Wallet *data;

@end
