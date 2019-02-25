//
//  TransactionRecordsHeaderView.m
//  pocketVKT
//
//  Created by vankiachain on 2017/12/11.
//  Copyright © 2017年 vankiachain. All rights reserved.
//

#import "TransactionRecordsHeaderView.h"

@implementation TransactionRecordsHeaderView

- (IBAction)selectAccount:(UIButton *)sender {
    
    if (self.delegate && [self.delegate respondsToSelector:@selector(selectAccountBtnDidClick:)]) {
        [self.delegate selectAccountBtnDidClick: sender];
    }
}

@end
