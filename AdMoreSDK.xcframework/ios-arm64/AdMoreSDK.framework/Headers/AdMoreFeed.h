//
//  AdMoreFeedAd.h
//  AdMoreSDK
//
//  Created by Aaron on 2023/3/11.
//

#import <Foundation/Foundation.h>
#import "AdMoreFeedView.h"
@class AdMoreFeedAd;
NS_ASSUME_NONNULL_BEGIN

@protocol AdMoreFeedDelegate <NSObject>

@optional

/**
 信息流加载成功
 */
- (void)adMoreFeedLoad:(NSArray<AdMoreFeedView *> * _Nullable)unifieFeedAdViewArray;
/**
 信息流加载失败
 */
- (void)adMoreFeedFail:(AdMoreFeedAd *)adMoreFeed error:(NSError *)error;

@end


@interface AdMoreFeed : NSObject

/// 代理指针
@property (nonatomic, weak)id<AdMoreFeedDelegate,AdMoreFeedViewDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

/// 初始化广告
- (instancetype)initWithPlaceId:(NSString *)placeId;

/// 获取广告
- (void)loadAdWithAdSize:(CGSize)adSize;

// 销毁广告
- (void)destroyAd;

@end

NS_ASSUME_NONNULL_END
