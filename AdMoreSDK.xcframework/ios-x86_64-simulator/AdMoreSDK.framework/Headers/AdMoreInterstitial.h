//
//  AMInterstitialAdLoader.h
//  AdMoreSDK
//
//  Created by Aaron on 2021/5/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdMoreInterstitial;

NS_ASSUME_NONNULL_BEGIN


@protocol AdMoreInterstitialDelegate <NSObject>

@optional
/**
 *  插屏模板加载成功
 */
- (void)adMoreInterstitialLoad:(AdMoreInterstitial *)adMoreInterstitial;
/**
 插屏广告展示成功
 */
- (void)adMoreInterstitialShow:(AdMoreInterstitial *)adMoreInterstitial;

/**
 * 插屏广告加载失败
 */
- (void)adMoreInterstitialFail:(AdMoreInterstitial *)adMoreInterstitial withError:(NSError *)error;

/**
 *  插屏广告点击
 */
- (void)adMoreInterstitialClick:(AdMoreInterstitial *)adMoreInterstitial;


/**
 *  插屏广告关闭
 */
- (void)adMoreInterstitialClose:(AdMoreInterstitial *)adMoreInterstitial;

@end

//插屏
@interface AdMoreInterstitial : NSObject

@property (nonatomic, weak)id<AdMoreInterstitialDelegate> delegate;

/// 初始化广告
/// @param placeId 广告位
- (instancetype)initWithPlaceId:(NSString *)placeId;
/// 获取广告
- (void)loadAd;
/// 广告展示方法,必须传入用于显示插播广告的UIViewController
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
