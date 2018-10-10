//
//  CNetWorkCache.h
//  CommonProject
//
//  Created by ios on 2018/10/10.
//  Copyright © 2018 ios. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNetWorkCache : NSObject

/**
 异步缓存网络请求数据，根据该request的 URL 和 parameters
 作为 key 存储来实现缓存多级页面的数据

 @param URL 请求的 URL 地址
 @param parameters 请求的参数
 @param networkCache 服务器返回的数据
 */
+ (void)setNetWorkCache:(id)networkCache URL:(NSString *)URL parameters:(NSDictionary *)parameters;


/**
 同步获取缓存数据

 @param URL 请求的 URL 地址
 @param parameters 请求的参数
 @return 缓存的网络请求数据
 */
+ (id)netWorkCacheWithURL:(NSString *)URL parameters:(NSDictionary *)parameters;


/**
 异步获取缓存数据

 @param URL 请求的 URL 地址
 @param parameters 请求的参数
 @param block 异步回调的block，block中返回缓存数据
 */
+ (void)netWorkCacheWithURL:(NSString *)URL parameters:(NSDictionary *)parameters block:(void(^)(id<NSCoding> object))block;


/**
 获取网络缓存的总大小 bytes(字节)
 */
+ (NSInteger)getTotalNetworkCacheSize;


/**
 删除所有网络缓存
 */
+ (void)removeTotalNetworkCache;
@end

NS_ASSUME_NONNULL_END
