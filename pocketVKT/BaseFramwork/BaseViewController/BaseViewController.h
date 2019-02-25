//
//  BaseViewController.h
//  pocketVKT
//
//  Created by vankiachain on 2017/11/27.
//  Copyright © 2017年 vankiachain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NavigationView.h"


@interface BaseViewController : UIViewController<UITableViewDelegate , UITableViewDataSource,  UIGestureRecognizerDelegate, NavigationViewDelegate, UIScrollViewDelegate>


@property(nonatomic, strong) UITableView *mainTableView;
@property(nonatomic, strong) UIScrollView *mainScrollView;
@end
