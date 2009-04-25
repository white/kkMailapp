/*
 *  MVMailBundle.h
 *  kkMailapp
 *
 *  Created by Olexandr Prokhorenko on 2/22/09.
 *  Copyright 2009 prokhorenko.us. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

@interface MVMailBundle : NSObject {
	
}

+ allBundles;
+ composeAccessoryViewOwners;
+ (void)registerBundle;
+ sharedInstance;
+ (BOOL)hasPreferencesPanel;
+ preferencesOwnerClassName;
+ preferencesPanelName;
+ (BOOL)hasComposeAccessoryViewOwner;
+ composeAccessoryViewOwnerClassName;
- (void)dealloc;
- (void)_registerBundleForNotifications;

@end
