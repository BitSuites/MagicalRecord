//
//  MagicalRecord+Actions.h
//
//  Created by Saul Mora on 2/24/11.
//  Copyright 2011 Magical Panda Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BPMagicalRecord/MagicalRecordInternal.h>
#import <BPMagicalRecord/NSManagedObjectContext+MagicalSaves.h>
#import <BPMagicalRecord/MagicalRecordXcode7CompatibilityMacros.h>

@interface MagicalRecord (Actions)

/* For all background saving operations. These calls will be sent to a different thread/queue.
 */
+ (void) saveWithBlock:(void (^ __MR_nonnull)(NSManagedObjectContext * __MR_nonnull localContext))block;
+ (void) saveWithBlock:(void (^ __MR_nonnull)(NSManagedObjectContext * __MR_nonnull localContext))block completion:(MR_nullable MRSaveCompletionHandler)completion;

/* For saving on the current thread as the caller, only with a separate context. Useful when you're managing your own threads/queues and need a serial call to create or change data
 */
+ (void) saveWithBlockAndWait:(void (^ __MR_nonnull)(NSManagedObjectContext * __MR_nonnull localContext))block;

@end
