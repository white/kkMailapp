//
//  main.m
//  kkMailapp
//
//  Created by Olexandr Prokhorenko on 2/22/09.
//  Copyright prokhorenko.us 2009. All rights reserved.
//

#import "kkMailappBundle.h"
#import <MacRuby/MacRuby.h>

@implementation kkMailappBundle

+ (void)load
{
}

+ (void) initialize
{
    [self registerBundle];
}

+ (NSBundle *) bundle {
    return [NSBundle bundleForClass:self];
}

+ (NSString *) version
{
    return [[[NSBundle bundleForClass:self] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
}

- (id)init
{  
	
    NSLog(@"kkMailapp loaded");
		
	@try {
        id object;
		
        object = [[MacRuby sharedRuntime] evaluateString:@"exit"];
    }
    @catch (NSException *exception) {
//        NSString *string = [NSString stringWithFormat:@"%@: %@\n%@", [exception name], [exception reason], 
//							[[[exception userInfo] objectForKey:@"backtrace"] description]];
//        NSLog(string);
    }
	
    return self;
}

@end
