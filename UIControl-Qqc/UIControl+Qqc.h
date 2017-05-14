//
//  UIControl+Qqc.h
//  QqcFramework
//
//  Created by mahailin on 15/8/7.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  UIControl类别
 */
@interface UIControl (Qqc)

/**
*  移除所有绑定在该control上的target和action
*/
- (void)removeAllTargetsAndActions;

/**
 *  不同于addTarget:action:forControlEvents:方法，该方法会独占该事件，即调用后会清除指定事件在该control上的所有绑定
 *
 *  @param target        目标对象
 *  @param action        响应事件
 *  @param controlEvents 事件
 */
- (void)setTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;

@end
