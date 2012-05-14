//
//  HelloWorldLayer.h
//  Solitaire
//
//  Created by Jonathan Wei on 5/14/12.
//  Copyright aWhiteRaven 2012. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
    // Fixed a typo.
    CCSprite* cards2;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
