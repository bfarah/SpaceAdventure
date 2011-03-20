//
//  SpaceAdventureAppDelegate.h
//  SpaceAdventure
//
//  Created by Bassem Farah on 20/03/11.
//  Copyright 2011 Bludger. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SpaceAdventureViewController;

@interface SpaceAdventureAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SpaceAdventureViewController *viewController;

@end
