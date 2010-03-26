//
//  Barney.m
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import "Barney.h"

@implementation Barney

#pragma mark FredProtocol method
- (NSString *)fredDidRequestString {
    return @"Hi from barney, fred's delegate!";
}

@end
