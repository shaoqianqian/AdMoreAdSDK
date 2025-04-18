//
//  AdMoreRewardVideo.h
//  AdMoreSDK
//
//  Created by Aaron on 2021/5/15.
//  激励

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN


@class AdMoreRewardVideo;

@protocol AdMoreRewardVideoDelegate <NSObject>

@optional
/**
 激励视频加载成功

 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoLoad:(AdMoreRewardVideo * _Nullable)rewardedVideoAd;
/**
 激励视频展示成功
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoShow:(AdMoreRewardVideo * _Nullable)rewardedVideoAd;

/**
 激励视频展示失败
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoFail:(AdMoreRewardVideo *_Nullable)rewardedVideoAd didFailWithError:(NSError *_Nullable)error;

/**
 激励视频奖励事件
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoReward:(AdMoreRewardVideo *_Nullable)rewardedVideoAd;

/**
 激励视频点击跳过
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
//- (void)adMoreRewardVideoSkip:(AdMoreRewardVideo *_Nullable)rewardedVideoAd;

/**
 激励视频点击
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoClick:(AdMoreRewardVideo *_Nullable)rewardedVideoAd;

/**
 激励视频播放完成
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoRewardPlayFinish:(AdMoreRewardVideo *_Nullable)rewardedVideoAd;

/**
 激励视频关闭
 @param rewardedVideoAd AdMoreRewardVideo 实例
 */
- (void)adMoreRewardVideoClose:(AdMoreRewardVideo *_Nullable)rewardedVideoAd;

@end

//激励视频
@interface AdMoreRewardVideo : NSObject

@property (nonatomic,weak)id<AdMoreRewardVideoDelegate>delegate;

@property (nonatomic,weak)UIViewController * viewController;

- (instancetype)initWithPlaceId:(NSString *)placeId;

- (void)loadAd;
@end

NS_ASSUME_NONNULL_END
