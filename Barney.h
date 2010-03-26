//
//  Barney.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
// import Fred.h to see the FredProtocol declaration
#import "Fred.h"

// declare Barney implements FredProtocol
@interface Barney : NSObject <FredProtocol> {

#pragma mark Instance variables
    Fred *fred;    
}

#pragma mark Properties
@property(nonatomic,retain) Fred *fred;


@end
