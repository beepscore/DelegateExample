//
//  Fred.m
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import "Fred.h"

@implementation Fred

#pragma mark properties
@synthesize fredsDelegate;

- (void)dealloc {
    // a delegator doesn't retain it's delegate, and so it doesn't release it
    fredsDelegate = nil;
    
    [super dealloc];
}


- (NSString *)stringForButtonPressed {
    
    // send message to fredsDelegate that fred wants a string
    return [self.fredsDelegate fredDidRequestString];
}

@end
