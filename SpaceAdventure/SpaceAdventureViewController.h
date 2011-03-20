//
//  SpaceAdventureViewController.h
//  SpaceAdventure
//
//  Created by Bassem Farah on 20/03/11.
//  Copyright 2011 Bludger. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <OpenGLES/EAGL.h>

#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface SpaceAdventureViewController : UIViewController {
@private
    EAGLContext *context;
    
    BOOL animating;
    NSInteger animationFrameInterval;
    CADisplayLink *displayLink;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) NSInteger animationFrameInterval;

- (void)startAnimation;
- (void)stopAnimation;

@end
