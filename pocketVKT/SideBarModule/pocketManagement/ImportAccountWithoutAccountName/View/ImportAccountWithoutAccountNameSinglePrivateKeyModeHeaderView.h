//
//  ImportAccountWithoutAccountNameSinglePrivateKeyModeHeaderView.h
//  pocketVKT
//
//  Created by vankiachain on 2018/11/19.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ImportAccountWithoutAccountNameSinglePrivateKeyModeHeaderViewDelegate <NSObject>

- (void)importAccountWithoutAccountNameSinglePrivateKeyModeHeaderViewConfirmBtnDidClick;

@end

@interface ImportAccountWithoutAccountNameSinglePrivateKeyModeHeaderView : UIView

@property(nonatomic, weak) id<ImportAccountWithoutAccountNameSinglePrivateKeyModeHeaderViewDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITextView *textView;


@end

NS_ASSUME_NONNULL_END
