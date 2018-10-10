//
//  CNetWorkCache.m
//  CommonProject
//
//  Created by ios on 2018/10/10.
//  Copyright © 2018 ios. All rights reserved.
//

#import "CNetWorkCache.h"
#import <YYCache.h>
#import <YYDiskCache.h>


@implementation CNetWorkCache
static NSString *const NetWorkCache = @"CNetWorkCache";
static YYCache *_netWorkCache;

+ (void)initialize{
    _netWorkCache = [YYCache cacheWithName:NetWorkCache];
}

+ (NSString *)cacheKeyWithURL:(NSString *)URL parameters:(NSDictionary *)parameters{
    if (!parameters) return URL;
    
    NSData *stringData = [NSJSONSerialization dataWithJSONObject:parameters options:0 error:nil];
    NSString *paramString = [[NSString alloc]initWithData:stringData encoding:NSUTF8StringEncoding];
    
    NSString *cacheKey = [NSString stringWithFormat:@"%@%@",URL,paramString];

    return cacheKey;
}

+ (void)setNetWorkCache:(id)networkCache URL:(NSString *)URL parameters:(NSDictionary *)parameters{
    NSString *cacheKey = [self cacheKeyWithURL:URL parameters:parameters];
    //YYCache异步缓存数据
    [_netWorkCache setObject:networkCache forKey:cacheKey withBlock:nil];
}

+ (id)netWorkCacheWithURL:(NSString *)URL parameters:(NSDictionary *)parameters{
    NSString *cacheKey = [self cacheKeyWithURL:URL parameters:parameters];
    
    return [_netWorkCache objectForKey:cacheKey];
}

+ (void)netWorkCacheWithURL:(NSString *)URL parameters:(NSDictionary *)parameters block:(void (^)(id<NSCoding> _Nonnull))block{
    NSString *cacheKey = [self cacheKeyWithURL:URL parameters:parameters];

    [_netWorkCache objectForKey:cacheKey withBlock:^(NSString * _Nonnull key, id<NSCoding>  _Nonnull object) {
        dispatch_async(dispatch_get_main_queue(), ^{
            block(object);
        });
    }];
}

+ (NSInteger)getTotalNetworkCacheSize{
    return [_netWorkCache.diskCache totalCost];
}

+ (void)removeTotalNetworkCache{
    [_netWorkCache removeAllObjects];
}


@end
