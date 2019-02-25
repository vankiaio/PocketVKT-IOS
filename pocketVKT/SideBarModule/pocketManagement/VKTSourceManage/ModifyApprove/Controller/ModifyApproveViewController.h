//
//  ModifyApproveViewController.h
//  pocketVKT
//
//  Created by vankiachain on 2018/6/22.
//  Copyright © 2018 vankiachain. All rights reserved.
//

#import "BaseViewController.h"
#import "VKTResourceResult.h"
#import "VKTResource.h"
#import "AccountResult.h"

@interface ModifyApproveViewController : BaseViewController
@property(nonatomic , copy) NSString *pageType;
@property(nonatomic , strong) VKTResourceResult *vktResourceResult;
@property(nonatomic , strong) AccountResult *accountResult;
@end
