/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGAnimatedRect : DOMObject {
}

@property(retain,readonly) DOMSVGRect *animVal;
@property(retain,readonly) DOMSVGRect *baseVal;

+ (id)_wrapSVGAnimatedRect:(struct SVGAnimatedTemplate<WebCore::FloatRect> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)arg1;

- (struct SVGAnimatedTemplate<WebCore::FloatRect> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)_SVGAnimatedRect;
- (id)_initWithSVGAnimatedRect:(struct SVGAnimatedTemplate<WebCore::FloatRect> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)arg1;
- (id)animVal;
- (id)baseVal;
- (void)dealloc;
- (void)finalize;

@end