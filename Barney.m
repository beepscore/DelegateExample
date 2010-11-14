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


- (void)awakeFromNib
{
    // barney "owns" fred and has a reference to fred
    self.fred = [[Fred alloc] init];
    
    // barney messages fred to set fred's delegate property to be barney
    // fred does not need a prior reference to barney
    self.fred.delegate = self;
}


#pragma mark Memory management methods
- (void)dealloc
{
    // We are in dealloc, so this instance of Barney is going away.
    // fred may stay around, because someone else beside this Barney could be retaining him.
    // fred's delegate property currently points to this instance of barney.
    // As soon as barney goes away fred's delegate would point to a bad address.
    // so before this barney goes away, re-point fred's delegate to nil
    self.fred.delegate = nil;
    
    // release fred. Note if someone else is still retaining fred he will stay alive
    [fred release], fred = nil;
    
    [super dealloc];
}


#pragma mark FredProtocol method
- (NSString *)fred:(id)sender didRequestAString:(BOOL)requestedAString
{
    return @"Hi from barney, fred's delegate!";
}

@end
