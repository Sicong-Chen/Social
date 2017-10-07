//
//  SCPost.m
//  Social
//
//  Created by Sicong Chen on 9/30/17.
//  Copyright © 2017 Sicong Chen. All rights reserved.
//

#import "SCPost.h"
#import <MapKit/MapKit.h>

@implementation SCPost

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    self = [super init];
    if (self != nil) {
        self.message = dictionary[@"message"];
        self.username = dictionary[@"username"];
    }
    return self;
}

@end
