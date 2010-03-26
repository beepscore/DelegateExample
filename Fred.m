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
@synthesize delegate;

- (void)dealloc {
    // a delegator doesn't retain it's delegate, and so it doesn't release it
    delegate = nil;
    
    [super dealloc];
}


- (NSString *)stringForButtonPressed {
    
    // send message to delegate that fred wants a string
    return [self.delegate fred:self didRequestAString:YES];
}

@end
