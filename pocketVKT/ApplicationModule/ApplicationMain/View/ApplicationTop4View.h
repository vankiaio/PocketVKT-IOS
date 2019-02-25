//
//  ApplicationTop4View.h
//  pocketVKT
//
//  Created by vankiachain on 2018/6/4.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enterprise.h"

@protocol ApplicationTop4ViewDelegate<NSObject>
- (void)top4ImgViewDidClick:(id)sender;
@end


@interface ApplicationTop4View : UIView
- (void)updateViewWithArray:(NSArray *)array;
@property(nonatomic, weak) id<ApplicationTop4ViewDelegate> delegate;


@end
