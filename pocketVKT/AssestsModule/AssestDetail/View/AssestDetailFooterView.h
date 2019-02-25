//
//  AssestDetailFooterView.h
//  pocketVKT
//
//  Created by vankiachain on 2018/5/22.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enterprise.h"

@protocol AssestDetailFooterViewDelegate<NSObject>
- (void)assestsDetailFooterViewDidClick:(UIButton *)sender;
@end


@interface AssestDetailFooterView : UIView

@property(nonatomic, weak) id<AssestDetailFooterViewDelegate> delegate;




@end
