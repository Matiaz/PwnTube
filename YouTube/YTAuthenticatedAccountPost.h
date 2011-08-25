/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <Foundation/Foundation.h>

@interface YTAuthenticatedAccountPost : NSObject {
	id _delegate;
	NSMutableURLRequest *_postRequest;
	NSURLConnection *_connection;
	int _type;
	BOOL _validResponse;
	NSMutableData *_rawData;
}
- (id)init;
- (void)_cleanup;
- (void)_deleteVideo:(id)video;
- (void)_didAuthenticate:(id)authenticate;
- (void)_failedToAuthenticate:(id)authenticate;
- (void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;
- (void)_removePS:(id)ps;
- (void)addVideoToFavorites:(id)favorites;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)dealloc;
- (void)failWithError:(id)error;
- (void)fileComplaintForVideo:(id)video;
- (void)postComment:(id)comment forVideo:(id)video;
- (void)removePlaylist:(id)playlist;
- (void)removeVideoFromFavorites:(id)favorites;
- (void)removeVideoFromPlaylist:(id)playlist;
- (void)setDelegate:(id)delegate;
- (void)setRating:(unsigned)rating forVideo:(id)video;
- (void)submitRequest;
- (void)submitRequestOfType:(id)type;
- (void)subscribeToUser:(id)user;
- (void)unsubscribeToSubscription:(id)subscription;
@end

