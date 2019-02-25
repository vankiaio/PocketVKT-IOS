//
//  WalletUtil.h
//  pocketVKT
//
//  Created by vankiachain on 2018/6/27.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WalletUtil : NSObject
/**
 wallet password
 */
+ (BOOL)validateWalletPasswordWithSha256:(NSString *)sha256 password:(NSString *)password;

+ (NSString *)generate_wallet_shapwd_withPassword:(NSString *)password;

/**
 set main account, need invoke after accountTable addRecord
 
 */
+ (void)setMainAccountWithAccountInfoModel:(AccountInfo *)accountInfo;
@end
