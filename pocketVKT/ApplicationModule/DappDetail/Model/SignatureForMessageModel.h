//
//  SignatureForMessageModel.h
//  pocketVKT
//
//  Created by vankiachain on 2018/10/10.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SignatureForMessageModel : NSObject
@property(nonatomic , copy) NSString *publicKey;
@property(nonatomic , copy) NSString *data;
@property(nonatomic , copy) NSString *whatfor;
@property(nonatomic , assign) BOOL isHash;
@end
