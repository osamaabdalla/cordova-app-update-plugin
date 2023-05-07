#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>


@interface CDVUpdatePlugin : CDVPlugin

- (void)update:(CDVInvokedUrlCommand*)command;

- (void)getAppVersion:(CDVInvokedUrlCommand*)command;

@end
