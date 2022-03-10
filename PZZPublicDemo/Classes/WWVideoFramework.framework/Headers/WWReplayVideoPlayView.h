//
//  WWReplayVideoPlayView.h
//  WWVideoFramework
//
//  Created by PZZ on 2021/12/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ReplayVideoPlayViewHeightBlock)(CGFloat height);

@interface WWReplayVideoPlayView : UIView

- (void)initializeReplayVideoData;
- (void)configUserCookie:(NSString *)cookie imeiStr:(NSString *)imeiStr baseUrl:(NSString *)baseUrl;
- (void)removeReplayVideoPlay;
@property (nonatomic,copy) ReplayVideoPlayViewHeightBlock replayVideoPlayViewHeightBlock;
@end

NS_ASSUME_NONNULL_END
