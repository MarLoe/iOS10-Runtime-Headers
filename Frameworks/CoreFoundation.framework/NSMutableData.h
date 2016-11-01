/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData

@property unsigned long long length;
@property (readonly) void*mutableBytes;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (void)abAppendString:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;

- (bool)_isCompact;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (Class)classForCoder;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setData:(id)arg1;
- (void)setLength:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_appendBytesWithUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)dataWithRandomBytes:(int)arg1;

- (void)replaceTrailingWith7LSB:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_appendCString:(const char *)arg1;
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)mf_makeImmutable;

// Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage

+ (id)dataWithHexString:(id)arg1;

- (id)initDataWithHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy

- (void)appendType:(unsigned char)arg1 length:(unsigned short)arg2 value:(const void*)arg3;
- (void)enumerateTLVsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)appendLELong:(int)arg1;
- (void)appendLEShort:(short)arg1;
- (void)appendString:(id)arg1 encoding:(unsigned long long)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withLELong:(int)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)tsp_appendDispatchData:(id)arg1;

@end
