//
//  BPCandidateResult.h
//  pocketVKT
//
//  Created by vankiachain on 2018/6/11.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BPCandidateDetailResult;
@interface BPCandidateResult : NSObject
@property(nonatomic, strong) NSString *msg;
@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) BPCandidateDetailResult *data;
@end
