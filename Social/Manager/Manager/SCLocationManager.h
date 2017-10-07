//
//  SCLocationManager.h
//  Social
//
//  Created by Sicong Chen on 10/1/17.
//  Copyright © 2017 Sicong Chen. All rights reserved.
//
#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
