//
//  CCollectionViewController.h
//  CommonProject
//
//  Created by ios on 2018/10/19.
//  Copyright © 2018 ios. All rights reserved.
//

#import "CBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CCollectionViewController : CBaseViewController
@property(nonatomic, strong) UICollectionView *collectionView;
@property(nonatomic, strong) NSMutableArray *dataSource;
@end

NS_ASSUME_NONNULL_END
