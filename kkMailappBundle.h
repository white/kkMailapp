/*
 *  kkMailappBundle.h
 *  kkMailapp
 *
 *  Created by Olexandr Prokhorenko on 2/22/09.
 *  Copyright 2009 prokhorenko.us. All rights reserved.
 *
 */

#import <Cocoa/Cocoa.h>
#import "MVMailBundle.h"

@interface kkMailappBundle : MVMailBundle {
    
}

+ (NSBundle *) bundle;
+ (NSString *) version;

@end
