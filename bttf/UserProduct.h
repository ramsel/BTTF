//
//  BFProduct.h
//  bttf
//
//  Created by Admin on 2/11/15.
//  Copyright (c) 2015 bttf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@class CategoryMain;
@class CategorySub;
@class CategoryProduct;
@class User;

@interface UserProduct : MTLModel <MTLJSONSerializing>

@property (nonatomic) NSString* userId;
@property (nonatomic) NSString* objectId;
@property (nonatomic) NSString* name;
@property (nonatomic) NSNumber* price;
@property (nonatomic) NSString* supplier;
@property (nonatomic) NSNumber* quantityBulk;
@property (nonatomic) NSNumber* quantityPerCase;
@property (nonatomic) NSNumber* quantityUnits;

@property (nonatomic) NSString* categoryMainId;
@property (nonatomic) NSString* categorySubId;
@property (nonatomic) NSString* categoryProductId;


#pragma mark - Logic
- (BOOL) isValid;


#pragma mark - Keys
+ (NSString*)categoryMainIdKey;
+ (NSString*)categorySubIdKey;
+ (NSString*)categoryProductIdKey;

@end
