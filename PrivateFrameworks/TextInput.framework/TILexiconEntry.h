/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString *_userInput;
    NSString *_documentText;
}

@property(readonly) NSString * documentText;
@property(readonly) NSString * userInput;

+ (id)entryWithDocumentText:(id)arg1 userInput:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)documentText;
- (id)userInput;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end