//
//  BFProductViewController.h
//  bttf
//
//  Created by Admin on 2/11/15.
//  Copyright (c) 2015 bttf. All rights reserved.
//

#import "BFBaseViewController.h"
#import "BFCategoryViewController.h"

@class UserProduct;

@protocol BFProductVCDelegate;

@interface BFProductViewController : BFCategoryViewController

@property (nonatomic, weak) id<BFProductVCDelegate> productDelegate;
@end

@protocol BFProductVCDelegate <NSObject>

- (void)didTapAddNewProduct:(id)parentObject;
- (void)didTapProduct:(UserProduct*)userProduct parentObject:(id)parentObject;

@end

