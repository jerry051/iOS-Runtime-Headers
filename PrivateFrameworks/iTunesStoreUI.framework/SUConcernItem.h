/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUConcernItem : NSObject {
    BOOL _default;
    NSString *_identifier;
    NSString *_title;
}

@property(getter=isDefaultConcern) BOOL defaultConcern;
@property(retain) NSString * identifier;
@property(retain) NSString * title;

- (void)dealloc;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isDefaultConcern;
- (void)setDefaultConcern:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end