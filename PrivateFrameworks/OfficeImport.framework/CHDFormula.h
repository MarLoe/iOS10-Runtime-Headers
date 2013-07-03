/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorkbook, EDReferenceCollection;

@interface CHDFormula : EDFormula  {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)arg1;
+ (id)formulaWithReference:(id)arg1;

- (bool)isConstantStringFormula;
- (void)prepareTokens;
- (id)initWithWorkbook:(id)arg1;
- (void)setReferences:(id)arg1;
- (id)referencesFromFormula;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (unsigned int)countOfCellsBeingReferenced;
- (void)setWorkbook:(id)arg1;
- (id)references;
- (void)dealloc;

@end