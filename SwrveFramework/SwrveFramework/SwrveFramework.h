//
//  SwrveFramework.h
//  SwrveFramework
//
//  Created by Kevin Brodigan on 11/08/2017.
//  Copyright © 2017 Swrve. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SwrveFramework.
FOUNDATION_EXPORT double SwrveFrameworkVersionNumber;

//! Project version string for SwrveFramework.
FOUNDATION_EXPORT const unsigned char SwrveFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SwrveFramework/PublicHeader.h>


// Conversation
#import <SwrveFramework/SwrveConversation.h>
#import <SwrveFramework/SwrveConversationCampaign.h>

// Talk
#import <SwrveFramework/SwrveBaseCampaign.h>
#import <SwrveFramework/SwrveButton.h>
#import <SwrveFramework/SwrveCampaign.h>
#import <SwrveFramework/SwrveCampaignStatus.h>
#import <SwrveFramework/SwrveImage.h>
#import <SwrveFramework/SwrveInterfaceOrientation.h>
#import <SwrveFramework/SwrveMessage.h>
#import <SwrveFramework/SwrveMessageController.h>
#import <SwrveFramework/SwrveMessageDelegate.h>
#import <SwrveFramework/SwrveMessageFormat.h>
#import <SwrveFramework/SwrveMessageViewController.h>
#import <SwrveFramework/SwrvePrivateBaseCampaign.h>
#import <SwrveFramework/SwrveTalkQA.h>
#import <SwrveFramework/SwrveTrigger.h>
#import <SwrveFramework/SwrveTriggerCondition.h>

// Track
#import <SwrveFramework/Swrve.h>
#import <SwrveFramework/SwrveConfig.h>
#import <SwrveFramework/SwrveEmpty.h>
#import <SwrveFramework/SwrveFileManagement.h>
#import <SwrveFramework/SwrveIAPRewards.h>
#import <SwrveFramework/SwrveInternalAccess.h>
#import <SwrveFramework/SwrveMigrationsManager.h>
#import <SwrveFramework/SwrveProtocol.h>
#import <SwrveFramework/SwrveReceiptProvider.h>
#import <SwrveFramework/SwrveResourceManager.h>

// Common - Permissions
#import <SwrveFramework/ISHPermissionCategory.h>
#import <SwrveFramework/ISHPermissionRequest+All.h>
#import <SwrveFramework/ISHPermissionRequest+Private.h>
#import <SwrveFramework/ISHPermissionRequest.h>
#import <SwrveFramework/ISHPermissionRequestAddressBook.h>
#import <SwrveFramework/ISHPermissionRequestLocation.h>
#import <SwrveFramework/ISHPermissionRequestNotificationsRemote.h>
#import <SwrveFramework/ISHPermissionRequestPhotoCamera.h>
#import <SwrveFramework/ISHPermissionRequestPhotoLibrary.h>

// Common - Push
#import <SwrveFramework/SwrvePush.h>
#import <SwrveFramework/SwrvePushConstants.h>
#import <SwrveFramework/SwrveSwizzleHelper.h>

// Common
#import <SwrveFramework/SwrveAssetsManager.h>
#import <SwrveFramework/SwrveCommon.h>
#import <SwrveFramework/SwrveCommonConnectionDelegate.h>
#import <SwrveFramework/SwrvePermissions.h>
#import <SwrveFramework/SwrveRESTClient.h>
#import <SwrveFramework/SwrveSignatureProtectedFile.h>

// Conversations - Categories
#import <SwrveFramework/UINavigationController+KeyboardResponderFix.h>
#import <SwrveFramework/UIWebView+YouTubeVimeo.h>

// Conversations
#import <SwrveFramework/SwrveBaseConversation.h>
#import <SwrveFramework/SwrveContentHTML.h>
#import <SwrveFramework/SwrveContentImage.h>
#import <SwrveFramework/SwrveContentItem.h>
#import <SwrveFramework/SwrveContentSpacer.h>
#import <SwrveFramework/SwrveContentStarRating.h>
#import <SwrveFramework/SwrveContentStarRatingView.h>
#import <SwrveFramework/SwrveContentVideo.h>
#import <SwrveFramework/SwrveConversationAtom.h>
#import <SwrveFramework/SwrveConversationAtomFactory.h>
#import <SwrveFramework/SwrveConversationButton.h>
#import <SwrveFramework/SwrveConversationContainerViewController.h>
#import <SwrveFramework/SwrveConversationEvents.h>
#import <SwrveFramework/SwrveConversationItemViewController.h>
#import <SwrveFramework/SwrveConversationPane.h>
#import <SwrveFramework/SwrveConversationResource.h>
#import <SwrveFramework/SwrveConversationResourceManagement.h>
#import <SwrveFramework/SwrveConversationsNavigationController.h>
#import <SwrveFramework/SwrveConversationStyler.h>
#import <SwrveFramework/SwrveConversationUIButton.h>
#import <SwrveFramework/SwrveInputItem.h>
#import <SwrveFramework/SwrveInputMultiValue.h>
#import <SwrveFramework/SwrveMessageEventHandler.h>
#import <SwrveFramework/SwrveSetup.h>



