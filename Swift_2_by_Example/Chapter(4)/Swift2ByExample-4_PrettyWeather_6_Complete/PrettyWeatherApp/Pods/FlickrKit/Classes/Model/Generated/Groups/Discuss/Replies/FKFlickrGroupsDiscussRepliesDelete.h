//
//  FKFlickrGroupsDiscussRepliesDelete.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGroupsDiscussRepliesDeleteError_TopicNotFound = 1,		 /* The topic_id is invalid. */
	FKFlickrGroupsDiscussRepliesDeleteError_ReplyNotFound = 2,		 /* The reply_id is invalid. */
	FKFlickrGroupsDiscussRepliesDeleteError_CannotDeleteReply = 3,		 /* Replies can only be edited by their owner. */
	FKFlickrGroupsDiscussRepliesDeleteError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGroupsDiscussRepliesDeleteError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsDiscussRepliesDeleteError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsDiscussRepliesDeleteError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsDiscussRepliesDeleteError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsDiscussRepliesDeleteError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsDiscussRepliesDeleteError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsDiscussRepliesDeleteError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsDiscussRepliesDeleteError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsDiscussRepliesDeleteError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsDiscussRepliesDeleteError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsDiscussRepliesDeleteError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsDiscussRepliesDeleteError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGroupsDiscussRepliesDeleteError;

/*

Delete a reply from a group topic.




*/
@interface FKFlickrGroupsDiscussRepliesDelete : NSObject <FKFlickrAPIMethod>

/* Pass in the group id to where the topic belongs. Can be NSID or group alias. Making this parameter optional for legacy reasons, but it is highly recommended to pass this in to get faster performance.  */
@property (nonatomic, copy) NSString *group_id; /* (Required) */

/* The ID of the topic the post is in. */
@property (nonatomic, copy) NSString *topic_id; /* (Required) */

/* The ID of the reply to delete. */
@property (nonatomic, copy) NSString *reply_id; /* (Required) */


@end
