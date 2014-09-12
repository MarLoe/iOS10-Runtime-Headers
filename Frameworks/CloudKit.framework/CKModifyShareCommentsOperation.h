/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSMutableArray, CKShareID;

@interface CKModifyShareCommentsOperation : CKOperation  {
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
    CKShareID *_shareID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifyShareCommentCompletionBlock;

    NSMutableArray *_savedComments;
    NSMutableDictionary *_commentsToSaveByLocalID;
    NSMutableArray *_deletedCommentIDs;
    NSMutableDictionary *_errorsByCommentID;
}

@property(copy) NSArray * commentsToSave;
@property(copy) NSArray * commentIDsToDelete;
@property(copy) CKShareID * shareID;
@property(copy) id modifyShareCommentCompletionBlock;
@property(retain) NSMutableArray * savedComments;
@property(retain) NSMutableDictionary * commentsToSaveByLocalID;
@property(retain) NSMutableArray * deletedCommentIDs;
@property(retain) NSMutableDictionary * errorsByCommentID;


- (id)modifyShareCommentCompletionBlock;
- (void)setDeletedCommentIDs:(id)arg1;
- (id)deletedCommentIDs;
- (void)setSavedComments:(id)arg1;
- (id)savedComments;
- (void)setErrorsByCommentID:(id)arg1;
- (id)errorsByCommentID;
- (void)setCommentIDsToDelete:(id)arg1;
- (id)commentIDsToDelete;
- (void)setCommentsToSave:(id)arg1;
- (id)commentsToSave;
- (id)commentsToSaveByLocalID;
- (void)setCommentsToSaveByLocalID:(id)arg1;
- (void)setModifyShareCommentCompletionBlock:(id)arg1;
- (id)initWithCommentsToSave:(id)arg1 commentIDsToDelete:(id)arg2 inShareWithID:(id)arg3;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void).cxx_destruct;

@end