//
//  WWVideoPlayView.h
//  AppNewFunctions
//
//  Created by 杨飞 on 2021/11/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 此SDK版本号为 1.0.0 支持ios9.0及以上


typedef void(^VideoPlayViewHeightBlock)(CGFloat height);

@interface WWVideoPlayView : UIView

- (void)initializeVideoData;

- (void)configUserCookie:(NSString *)cookie imeiStr:(NSString *)imeiStr baseUrl:(NSString *)baseUrl;

- (void)removeVideoPlay;

@property (nonatomic,copy) VideoPlayViewHeightBlock videoPlayViewHeightBlock;

@end

NS_ASSUME_NONNULL_END
