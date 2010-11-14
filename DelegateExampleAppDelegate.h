//
//  DelegateExampleAppDelegate.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//  Reference: http://developer.apple.com/mac/library/documentation/Cocoa/Conceptual/CocoaFundamentals/CommunicatingWithObjects/CommunicateWithObjects.html#//apple_ref/doc/uid/TP40002974-CH7-SW18

#import <Cocoa/Cocoa.h>
@class Barney;

@interface DelegateExampleAppDelegate : NSObject <NSApplicationDelegate> {
#pragma mark instance variables
    // Objective C automatically adds instance variables to back properties
}

#pragma mark properties
@property (assign)IBOutlet NSWindow *window;
@property(nonatomic,retain)IBOutlet NSTextField *myLabel;

// barney is instantiated in .xib, which will autorelease it.  We need to retain it.
@property(nonatomic,retain)IBOutlet Barney *barney;

- (IBAction)handleStartButton:(id)sender;

@end
