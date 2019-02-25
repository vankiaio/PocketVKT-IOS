//
//  BackupAccountHeaderView.h
//  pocketVKT
//
//  Created by vankiachain on 2018/5/21.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseView.h"

@protocol BackupAccountHeaderViewDelegate<NSObject>
- (void)backupConfirmBtnDidClick;
- (void)confirmSwitchDidOn;
@end


@interface BackupAccountHeaderView : BaseView

@property(nonatomic , strong) NSString *accountName;
@property(nonatomic, weak) id<BackupAccountHeaderViewDelegate> delegate;
@property(nonatomic , strong) UITextView *contentTextView;
@end
