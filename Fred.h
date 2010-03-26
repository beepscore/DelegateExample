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
#pragma mark Instance variables
    id delegate;
}

#pragma mark Properties
// a delegator should manage its delegate property with assign, not retain.
// Ref http://cocoawithlove.com/2009/07/rules-to-avoid-retain-cycles.html
// delegate type is id (any type)
@property(nonatomic,assign)IBOutlet id delegate;

- (NSString *)stringForButtonPressed;

@end

// list FredProtocol methods
@protocol FredProtocol
- (NSString *)fred:(Fred *)sender didRequestAString:(BOOL)requestedAString;
@end

