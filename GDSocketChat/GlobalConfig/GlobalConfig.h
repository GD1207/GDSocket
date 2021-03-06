//
//  GlobalConfig.h
//  GDSocketChat
//
//  Created by 郭达 on 2018/7/2.
//  Copyright © 2018年 DouNiu. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum : NSUInteger {
    Chat_Send_Recv_Type_Send,
    Chat_Send_Recv_Type_Recv
} Chat_Send_Recv_Type;

FOUNDATION_EXTERN NSString * const FirstHomeCacheKey;//首页缓存文件名

FOUNDATION_EXTERN NSString * const Socket_HeartAlive;//心跳包

FOUNDATION_EXTERN NSString * const Socket_InitBindsc;//初始化绑定

FOUNDATION_EXTERN NSString * const Socket_SendHandshakeSafe;//握手

FOUNDATION_EXTERN NSString * const Socket_Send_Recv_Message;//通讯消息类型

FOUNDATION_EXTERN NSString * const Socket_SureMessage;//收到消息，返回确认信息

FOUNDATION_EXTERN NSString * const Notification_RecvMessage;




@interface GlobalConfig : NSObject


/**
 获取当前时间戳->转成字符串，唯一标识

 @return 时间戳字符串
 */
+ (NSString *)getNowTimeInterval;

@end
