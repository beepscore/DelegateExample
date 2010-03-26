//
//  DelegateExampleAppDelegate.m
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import "DelegateExampleAppDelegate.h"
#import "Fred.h"

@implementation DelegateExampleAppDelegate

#pragma mark properties
@synthesize window;
@synthesize myLabel;
@synthesize fred;
@synthesize barney;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	// Insert code here to initialize your application 
}


- (void)dealloc {
    [window release], window = nil;
    [myLabel release], myLabel = nil;
    [fred release], fred = nil;
    [barney release], barney = nil;
    
    [super dealloc];
}


- (IBAction)handleGoButton:(id)sender {
    // ask fred for a string to put in myLabel
    [self.myLabel setStringValue:[self.fred stringForButtonPressed]];
}

@end
