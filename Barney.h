//
//  Barney.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
// import Fred.h to see the FredDelegate protocol declaration
#import "Fred.h"

// declare Barney implements FredDelegate
@interface Barney : NSObject <FredDelegate> {

#pragma mark Instance variables
    Fred *fred;    
}

#pragma mark Properties
@property(nonatomic,retain) Fred *fred;


@end
