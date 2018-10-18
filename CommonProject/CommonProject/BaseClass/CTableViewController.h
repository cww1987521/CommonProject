//
//  CTableViewController.h
//  CommonProject
//
//  Created by ios on 2018/10/17.
//  Copyright © 2018 ios. All rights reserved.
//

#import "CBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTableViewController : CBaseViewController
@property(nonatomic, strong) UITableView *tableView;
@property(nonatomic, strong) NSMutableArray *dataSource;
@end

NS_ASSUME_NONNULL_END
