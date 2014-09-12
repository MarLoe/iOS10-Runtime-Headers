/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PFZlibDataDecompressionOptions : NSObject  {
    bool_decompressAllAtOnce;
    int _windowBits;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _createBuffer;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _growData;

}

@property int windowBits;
@property(copy) id createBuffer;
@property(copy) id growData;
@property bool decompressAllAtOnce;

+ (id)defaultOptions;

- (void)setDecompressAllAtOnce:(bool)arg1;
- (bool)decompressAllAtOnce;
- (id)growData;
- (id)createBuffer;
- (void)setGrowData:(id)arg1;
- (void)setCreateBuffer:(id)arg1;
- (void)setWindowBits:(int)arg1;
- (int)windowBits;
- (void).cxx_destruct;

@end