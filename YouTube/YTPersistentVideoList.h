/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <Foundation/Foundation.h>

@interface YTPersistentVideoList : NSObject {
	NSString *_categoryName;
	NSMutableArray *_videos;
}
@property(readonly, retain) NSMutableArray *videos;	// converted property
+ (id)persistPathWithCategoryName:(id)categoryName;
- (id)initWithCategoryName:(id)categoryName;
- (void)addVideo:(id)video;
- (void)dealloc;
- (void)persist;
- (void)removeFromDisk;
// converted property getter: - (id)videos;
@end

