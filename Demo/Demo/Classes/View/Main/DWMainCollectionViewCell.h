//
//  DWMainCollectionViewCell.h
//  Demo
//
//  Created by zwl on 2019/4/11.
//  Copyright © 2019 com.bokecc.www. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DWMainCollectionViewCell : UICollectionViewCell

-(void)setVideoModel:(DWVodModel *)vodModel AndIsLeft:(BOOL)isLeft;

@end

NS_ASSUME_NONNULL_END
