//
//  MagicalRecord.h
//
//  Created by Saul Mora on 28/07/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

//! Project version number for MagicalRecord.
FOUNDATION_EXPORT double MagicalRecordVersionNumber;

//! Project version string for MagicalRecord.
FOUNDATION_EXPORT const unsigned char MagicalRecordVersionString[];

#import <BPMagicalRecord/MagicalRecordXcode7CompatibilityMacros.h>
#import <BPMagicalRecord/MagicalRecordInternal.h>
#import <BPMagicalRecord/MagicalRecordLogging.h>

#import <BPMagicalRecord/MagicalRecord+Actions.h>
#import <BPMagicalRecord/MagicalRecord+ErrorHandling.h>
#import <BPMagicalRecord/MagicalRecord+Options.h>
#import <BPMagicalRecord/MagicalRecord+Setup.h>

#import <BPMagicalRecord/NSManagedObject+MagicalRecord.h>
#import <BPMagicalRecord/NSManagedObject+MagicalRequests.h>
#import <BPMagicalRecord/NSManagedObject+MagicalFinders.h>
#import <BPMagicalRecord/NSManagedObject+MagicalAggregation.h>
#import <BPMagicalRecord/NSManagedObjectContext+MagicalRecord.h>
#import <BPMagicalRecord/NSManagedObjectContext+MagicalChainSave.h>
#import <BPMagicalRecord/NSManagedObjectContext+MagicalSaves.h>
#import <BPMagicalRecord/NSManagedObjectContext+MagicalThreading.h>
#import <BPMagicalRecord/NSPersistentStoreCoordinator+MagicalRecord.h>
#import <BPMagicalRecord/NSManagedObjectModel+MagicalRecord.h>
#import <BPMagicalRecord/NSPersistentStore+MagicalRecord.h>

#import <BPMagicalRecord/MagicalImportFunctions.h>
#import <BPMagicalRecord/NSManagedObject+MagicalDataImport.h>
#import <BPMagicalRecord/NSNumber+MagicalDataImport.h>
#import <BPMagicalRecord/NSObject+MagicalDataImport.h>
#import <BPMagicalRecord/NSString+MagicalDataImport.h>
#import <BPMagicalRecord/NSAttributeDescription+MagicalDataImport.h>
#import <BPMagicalRecord/NSRelationshipDescription+MagicalDataImport.h>
#import <BPMagicalRecord/NSEntityDescription+MagicalDataImport.h>
