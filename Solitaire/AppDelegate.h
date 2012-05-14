//
//  AppDelegate.h
//  Solitaire
//
//  Created by Jonathan Wei on 5/14/12.
//  Copyright aWhiteRaven 2012. All rights reserved.
//

#import "cocos2d.h"

@interface SolitaireAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	MacGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
