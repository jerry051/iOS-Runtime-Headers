/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLQuery;

@interface MPMediaServerQuery : NSObject <NSCoding> {
    NSUInteger _groupingProperty;
    MLQuery *_query;
}

@property(readonly) MLQuery *MLQuery;

- (id)MLQuery;
- (void)_sanitizeQuery:(id)arg1;
- (id)collections;
- (NSUInteger)countOfCollections;
- (NSUInteger)countOfItems;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMLQuery:(id)arg1;
- (id)items;

@end