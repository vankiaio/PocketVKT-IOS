//
//  DappChangeAccountOnNavigationRightView.h
//  pocketVKT
//
//  Created by vankiachain on 2018/10/19.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DappChangeAccountOnNavigationRightViewDelegate <NSObject>

- (void)dappChangeAccountOnNavigationRightViewDidClick;

@end

@interface DappChangeAccountOnNavigationRightView : UIView

@property(nonatomic, weak) id<DappChangeAccountOnNavigationRightViewDelegate> delegate;

@property(nonatomic , strong) UILabel *accountNameLabel;
@end

NS_ASSUME_NONNULL_END
