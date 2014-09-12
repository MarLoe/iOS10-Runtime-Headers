/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface TCMessageContext : NSObject  {
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
}

+ (void)reportWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)removeContextForCurrentThread;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned long long)saveObjectStack;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (id)pushCurrentPlaceholder;
+ (void)pushCurrentObject:(id)arg1;
+ (bool)isFileStructuredStorage;
+ (void)setIsFileStructuredStorage:(bool)arg1;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)createContextForCurrentThread;
+ (void)reportErrorException:(id)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportError:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportObject:(id)arg1 withWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg2;
+ (void)popCurrentObject;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)replacePlaceholdersWithObjects;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg2 parameters:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg3;
+ (void)initialize;

- (void)reportWarningForObject:(id)arg1 affectedObject:(id)arg2 warning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg3 parameterList:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg4;
- (void)setObject:(id)arg1 forPlaceholderKey:(id)arg2;
- (void)replacePlaceholdersWithObjects;
- (void)popPlaceholder:(id)arg1;
- (id)pushPlaceholder;
- (void)popObject;
- (void)pushObject:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (void)addErrorMessageEntry:(id)arg1;
- (id)currentObject;
- (id)init;
- (void)dealloc;

@end