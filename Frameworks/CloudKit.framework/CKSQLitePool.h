/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray;

@interface CKSQLitePool : NSObject  {
    bool_drainScheduled;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _factory;

    NSMutableArray *_dbs;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) id factory;
@property(retain) NSMutableArray * dbs;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property bool drainScheduled;


- (id)factory;
- (void)closeAll;
- (id)initWithFactory:(id)arg1;
- (id)acquireDatabase:(bool)arg1;
- (void)setDrainScheduled:(bool)arg1;
- (bool)drainScheduled;
- (void)setDbs:(id)arg1;
- (void)performWithDatabase:(id)arg1;
- (void)_drain;
- (bool)performWithDatabase:(id)arg1 error:(id*)arg2;
- (void)releaseDatabase:(id)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_scheduleDrain;
- (id)_acquireDatabaseWithError:(id*)arg1;
- (id)_openDatabaseWithError:(id*)arg1;
- (id)dbs;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void).cxx_destruct;

@end