//
//  DelegateExampleAppDelegate.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Fred;
@class Barney;

@interface DelegateExampleAppDelegate : NSObject <NSApplicationDelegate> {
#pragma mark instance variables
    NSWindow *window;
    NSTextField *myLabel;
    Fred *fred;
    Barney *barney;
}

#pragma mark properties
@property (assign)IBOutlet NSWindow *window;
@property(nonatomic,retain)IBOutlet NSTextField *myLabel;

// fred is instantiated in .xib, which will autorelease it.  We need to retain it.
@property(nonatomic,retain)IBOutlet Fred *fred;

// barney is instantiated in .xib, which will autorelease it.  We need to retain it.
// Here DelegateExampleAppDelegate retains barney, which is also fred's delegate.
// This avoids potential avoid circular retain between fred and barney, but
// I'm not sure if it's best practice style.
@property(nonatomic,retain)IBOutlet Barney *barney;

- (IBAction)handleGoButton:(id)sender;

@end
