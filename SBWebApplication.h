/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBApplication.h"

@class UIWebClip;

@interface SBWebApplication : SBApplication
{
    UIWebClip *_webClip;
    BOOL _isLastWebApplication;
}

+ (id)displayIdentifierForWebClipIdentifier:(id)fp8;
+ (id)displayIdentifierForWebClip:(id)fp8;
- (void)setWebClip:(id)fp8;
- (id)webClip;
- (void)willActivateOtherWebApplication:(id)fp8;
- (void)_setActivationState:(int)fp8;
- (void)didExitWithInfo:(id)fp8 type:(int)fp12;
- (void)disableContextHostingForRequester:(id)fp8;
- (void)enableContextHostingForRequester:(id)fp8 orderFront:(BOOL)fp12;
- (id)contextHostViewForRequester:(id)fp8;
- (id)_contextHostRequesterForRequester:(id)fp8;
- (void)clearContextHostManager;
- (void)setContextHostManager:(id)fp8;
- (void)setRunning:(BOOL)fp8;
- (void)setProcessInfo:(id)fp8;
- (id)_newDefaultImageInfoForLaunchingOrientation:(int)fp8 scale:(float)fp12;
- (BOOL)isWebApplication;
- (id)activationSettings;
- (id)_urlForLaunch;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)fp8 webClip:(id)fp12 path:(id)fp16 bundle:(id)fp20 infoDictionary:(id)fp24 isSystemApplication:(BOOL)fp28 signerIdentity:(id)fp32 provisioningProfileValidated:(BOOL)fp36;

@end

