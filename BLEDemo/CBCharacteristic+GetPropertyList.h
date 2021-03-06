//
//  CBCharacteristic+GetPropertyList.h
//  BLETest
//
//  Created by ml on 16/8/19.
//  Copyright © 2016年 李博文. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>

#define READ        @"Read"
#define WRITE       @"Write"
#define NOTIFY      @"Notify"
#define INDICATE    @"Indicate"

@interface CBCharacteristic (GetPropertyList)

- (NSString *)getPropertyString;

- (NSArray *)getPropertyList;

- (NSString *)getCharacteristicNameForUUID;
@end
