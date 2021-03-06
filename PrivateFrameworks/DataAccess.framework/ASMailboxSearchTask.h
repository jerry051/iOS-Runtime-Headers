/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@interface ASMailboxSearchTask : ASSearchTask {
}

- (void)_appendSearchOptions:(id)arg1;
- (void)_appendSearchQuery:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (int)numDownloadedElements;
- (void)performTask;
- (BOOL)processContext:(id)arg1;
- (id)replacementObjectForEmailItem:(id)arg1;
- (id)requestBody;
- (BOOL)requiresEASVersionInformaton;

@end
