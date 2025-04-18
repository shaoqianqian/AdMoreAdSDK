//
//  AdMoreSDKManager.h
//  AdMoreSDK
//
//  Created by Aaron on 2021/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdMoreSDKManager : NSObject

/// SDK 注册接口 (注意: 请在 app 初始化时调用， 只调用一次）。
/// @param appkey key
+ (void)registerAppKey:(NSString *)appkey;

/// 获取SDK版本号
+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
