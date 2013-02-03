/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, NSTimer;

@interface PLAlbumScroller : UIScroller {
    struct CGPoint { 
        float x; 
        float y; 
    float _destinationX;
    float _dragSpeed;
    BOOL _dragging;
    } _grabLoc;
    float _grabX;
    NSInteger _lastDragDirection;
    NSInteger _lastScrollDirection;
    double _lastTimeStamp;
    float _lastX;
    UIView *_leftBackstopView;
    float _mySpeed;
    float _myX;
    UIView *_rightBackstopView;
    BOOL _shouldAdvance;
    float _slowDownFactor;
    NSTimer *_updateTimer;
}

- (BOOL)_alwaysHandleInteractionEvents;
- (void)_cancelUpdateTimer;
- (void)_doScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 animate:(BOOL)arg2;
- (void)_releaseDrag;
- (void)_startTimer;
- (void)_updateDragInfoWithTimeInterval:(double)arg1 event:(struct __GSEvent { }*)arg2 smoothScrolling:(BOOL)arg3;
- (void)_updateScrollWithTimeInterval:(double)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)contentMouseUpInView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)dealloc;
- (void)ensureOffsetToImageBoundary;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)isDragging;
- (BOOL)isScrollingEnabled;
- (BOOL)isSmoothScrolling;
- (NSInteger)lastScrollDirection;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)scrollToNextImageWithAnimation:(BOOL)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (void)scrollToPreviousImageWithAnimation:(BOOL)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (BOOL)shouldAdvance;

@end