//
//  SCPost.h
//  Social
//
//  Created by Sicong Chen on 9/30/17.
//  Copyright © 2017 Sicong Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

@interface SCPost : NSObject

@property(nonatomic,copy) NSString *message;
@property(nonatomic) NSString *username;
@property (nonatomic)  CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
