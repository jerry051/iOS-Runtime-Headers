/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class NSMutableArray;

@interface SKRadioButton : SKControl {
    NSMutableArray *_options;
    int _selectedIndex;
}

- (void)addOption:(id)arg1;
- (void)addOptionWithTitle:(id)arg1;
- (void)clearAllOptions;
- (void)dealloc;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 inLayer:(id)arg2;
- (id)init;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg1;

@end
