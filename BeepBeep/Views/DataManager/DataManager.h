//
//  DataManager.h
//  BeepBeep
//
//  Created by Nguyen Minh on 7/2/15.
//  Copyright (c) 2015 Nguyen Minh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataManager : NSObject

+ (instancetype)sharedManager;
+ (BOOL)saveAllChanges;
@end
