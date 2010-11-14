//
//  Fred.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// declare FredDelegate protocol
@protocol FredDelegate
- (NSString *)fred:(id)sender didRequestAString:(BOOL)requestedAString;
@end

@interface Fred : NSObject
{
#pragma mark Instance variables
    // Objective C automatically adds instance variables to back properties
}

#pragma mark Properties

// a delegator should manage its delegate property with assign, not retain.
// Ref http://cocoawithlove.com/2009/07/rules-to-avoid-retain-cycles.html
// delegate type is id <FredDelegate> (any type, but it must conform to FredDelegate protocol)
@property(nonatomic,assign)IBOutlet id <FredDelegate> delegate;

- (NSString *)stringForButtonPressed;

@end

