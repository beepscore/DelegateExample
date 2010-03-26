//
//  Fred.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// declare FredProtocol.  We will list methods below, after interface block.
@protocol FredProtocol;

@interface Fred : NSObject {

}

// a delegator should assign it's delegate, don't retain it.
// fredsDelegate type is id (any type)
// In .xib, connect fredsDelegate outlet to Barney object
@property(nonatomic,assign)IBOutlet id fredsDelegate;

- (NSString *)stringForButtonPressed;

@end

// list FredProtocol methods
@protocol FredProtocol
- (NSString *)fredDidRequestString;
@end

