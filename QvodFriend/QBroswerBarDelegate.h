//
//  QBroswerBarDelegate.h
//  QShake
//
//  Created by douzifly on 13-9-25.
//  Copyright (c) 2013年 douzifly. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol QBroswerBarDelegate <NSObject>
@optional
- (void) backClicked;
- (void) homeClicked;
- (void) refreshClicked;
@end
