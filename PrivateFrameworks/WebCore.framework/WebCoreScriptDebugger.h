/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebCoreScriptCallFrame, WebScriptObject, <WebScriptDebugger>;

@interface WebCoreScriptDebugger : NSObject {
    struct WebCoreScriptDebuggerImp { int (**x1)(); struct DebuggerImp {} *x2; struct HashMap<KJS::JSGlobalObject*,KJS::ProtectedPtr<KJS::JSValue>,WTF::PtrHash<KJS::JSGlobalObject*>,WTF::HashTraits<KJS::JSGlobalObject*>,WTF::HashTraits<KJS::ProtectedPtr<KJS::JSValue> > > { 
            struct HashTable<int,std::pair<int, KJS::ProtectedPtr<KJS::JSValue> >,WTF::PairFirstExtractor<std::pair<int, KJS::ProtectedPtr<KJS::JSValue> > >,WTF::IntHash<int32_t>,WTF::PairHashTraits<WTF::HashTraits<int32_t>, WTF::HashTraits<KJS::ProtectedPtr<KJS::JSValue> > >,WTF::HashTraits<int32_t> > { 
                struct pair<int,KJS::ProtectedPtr<KJS::JSValue> > {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
    WebCoreScriptCallFrame *_current;
        } x3; id x4; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x5; void*x6; void*x7; unsigned int x8/* : ? */; unsigned char x9; out const void*x10; unsigned short x11; BOOL x12; const NSInteger x13; void*x14; void*x15; void*x16; void*x17; unsigned int x18/* : ? */; void*x19; void*x20; void*x21; void*x22; const void*x23; void*x24; WebCoreScriptCallFrame *x25; } *_debugger;
    <WebScriptDebugger> *_delegate;
    WebScriptObject *_globalObj;
}

+ (void)initialize;

- (id)_enterFrame:(struct ExecState { struct JSGlobalObject {} *x1; struct JSValue {} *x2; struct CommonIdentifiers {} *x3; struct List {} *x4; struct ExecState {} *x5; struct ScopeNode {} *x6; struct FunctionImp {} *x7; struct List {} *x8; struct ActivationImp {} *x9; struct Vector<KJS::LocalStorageEntry,32ul> {} *x10; struct ScopeChain { struct ScopeChainNode {} *x_11_1_1; } x11; struct JSVariableObject {} *x12; struct JSObject {} *x13; struct LabelStack { struct StackElem {} *x_14_1_1; } x14; NSInteger x15; NSInteger x16; NSInteger x17; NSInteger x18; struct Identifier {} *x19; }*)arg1;
- (id)_leaveFrame;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)initWithDelegate:(id)arg1;

@end