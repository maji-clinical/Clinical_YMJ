//
//  UIHierarchy.h
//  CVKHierarchySearcher
//
//  Created by Romans Karpelcevs on 21/10/14.
//  Copyright (c) 2014 Romans Karpelcevs. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIViewController;
@class UINavigationController;

@protocol ViewControllerHierarchy <NSObject>

@property (nonatomic, readonly) UIViewController *topmostViewController;
@property (nonatomic, readonly) UIViewController *topmostNonModalViewController;
@property (nonatomic, readonly) UINavigationController *topmostNavigationController;

@end

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com 

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com 

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com 
