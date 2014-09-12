/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKDOMRange;

@interface WKDOMTextIterator : NSObject  {
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > { 
        struct __compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > { 
            struct TextIterator {} *__first_; 
        } __ptr_; 
    } _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow> { 
        unsigned short *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    } _upconvertedText;
}

@property(readonly) bool atEnd;
@property(readonly) WKDOMRange * currentRange;
@property(readonly) unsigned long long currentTextLength;
@property(readonly) const unsigned short* currentTextPointer;


- (bool)atEnd;
- (unsigned long long)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (id)currentRange;
- (void)advance;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRange:(id)arg1;

@end