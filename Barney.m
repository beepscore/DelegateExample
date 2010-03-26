//
//  Barney.m
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import "Barney.h"

@implementation Barney

#pragma mark Properties
@synthesize fred;


- (void)awakeFromNib {
    self.fred = [[Fred alloc] init];
    
    // set fred's delegate to barney
    self.fred.delegate = self;
}


#pragma mark Memory management methods
- (void)dealloc {
    // This Barney is going away.
    // Someone else could be retaining fred, so make sure fredsDelegate doesn't point to a bad address
    fred.delegate = nil;
    
    [fred release], fred = nil;
    [super dealloc];
}


#pragma mark FredProtocol method
- (NSString *)fred:(Fred *)sender didRequestAString:(BOOL)requestedAString {

    return @"Hi from barney, fred's delegate!";
}


@end
