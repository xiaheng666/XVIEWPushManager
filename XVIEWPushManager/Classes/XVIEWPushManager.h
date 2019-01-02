//
//  XVIEWPushManager.h
//  XVIEWPushManager
//
//  Created by yyj on 2018/12/29.
//  Copyright © 2018 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWPushManager : NSObject

/**
 * 单例
 */
+ (instancetype)sharedXVIEWPushManager;

/**
 * 注册推送
 @param param    launchOptions 启动参数
 */
- (id)registerPush:(NSDictionary *)param;

/**
 * 注册设备
 @param param           deviceToken  设备
 */
- (void)registerDevice:(NSDictionary *)param;

/**
 * 取消推送
 */
- (void)unregisterPush;

/**
 * 设置别名
 @param param           alias   别名
 */
- (id)setAlias:(NSDictionary *)param;

/**
 * 删除别名
 @param param           alias   别名
 */
- (id)deleteAlias:(NSDictionary *)param;

/**
 * 设置tags
 @param param           tags   tags的数组，单个tag最大允许长度128字节，编码UTF-8，超过长度绑定失败
 */
- (id)addTags:(NSDictionary *)param;

/**
 * 删除tags
 @param param           tags
 */
- (id)deleteTags:(NSDictionary *)param;

/**
 * 获取所有tags
 */
- (id)getAllTags;

@end
