//
//  NSManagedObjectContext+MagicalSaves.h
//  Magical Record
//
//  Created by Saul Mora on 3/9/12.
//  Copyright (c) 2012 Magical Panda Software LLC. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <BPMagicalRecord/MagicalRecordXcode7CompatibilityMacros.h>

typedef NS_OPTIONS(NSUInteger, MRSaveOptions) {
    /** No options — used for cleanliness only */
    MRSaveOptionNone = 0,

    /** When saving, continue saving parent contexts until the changes are present in the persistent store */
    MRSaveParentContexts = 1 << 1,

    /** Perform saves synchronously, blocking execution on the current thread until the save is complete */
    MRSaveSynchronously = 1 << 2,

    /** Perform saves synchronously, blocking execution on the current thread until the save is complete; however, saves root context asynchronously */
    MRSaveSynchronouslyExceptRootContext = 1 << 3
};

typedef void (^MRSaveCompletionHandler)(BOOL contextDidSave, NSError * __MR_nullable error);

@interface NSManagedObjectContext (MagicalSaves)

/**
 Asynchronously save changes in the current context and it's parent.
 Executes a save on the current context's dispatch queue asynchronously. This method only saves the current context, and the parent of the current context if one is set. The completion block will always be called on the main queue.

 @param completion Completion block that is called after the save has completed. The block is passed a success state as a `BOOL` and an `NSError` instance if an error occurs. Always called on the main queue.

 @since Available in v2.1.0 and later.
*/
- (void) MR_saveOnlySelfWithCompletion:(MR_nullable MRSaveCompletionHandler)completion;

/**
 Asynchronously save changes in the current context all the way back to the persistent store.
 Executes asynchronous saves on the current context, and any ancestors, until the changes have been persisted to the assigned persistent store. The completion block will always be called on the main queue.

 @param completion Completion block that is called after the save has completed. The block is passed a success state as a `BOOL` and an `NSError` instance if an error occurs. Always called on the main queue.

 @since Available in v2.1.0 and later.
 */
- (void) MR_saveToPersistentStoreWithCompletion:(MR_nullable MRSaveCompletionHandler)completion;

/**
 Synchronously save changes in the current context and it's parent.
 Executes a save on the current context's dispatch queue. This method only saves the current context, and the parent of the current context if one is set. The method will not return until the save is complete.

 @since Available in v2.1.0 and later.
 */
- (void) MR_saveOnlySelfAndWait;

/**
 Synchronously save changes in the current context all the way back to the persistent store.
 Executes saves on the current context, and any ancestors, until the changes have been persisted to the assigned persistent store. The method will not return until the save is complete.

 @since Available in v2.1.0 and later.
 */
- (void) MR_saveToPersistentStoreAndWait;

/**
 Save the current context with options.
 All other save methods are conveniences to this method.

 @param saveOptions Bitmasked options for the save process.
 @param completion  Completion block that is called after the save has completed. The block is passed a success state as a `BOOL` and an `NSError` instance if an error occurs. Always called on the main queue.

 @since Available in v2.1.0 and later.
 */
- (void) MR_saveWithOptions:(MRSaveOptions)saveOptions completion:(MR_nullable MRSaveCompletionHandler)completion;

@end
