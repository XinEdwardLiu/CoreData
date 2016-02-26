//
//  PragBook+CoreDataProperties.h
//  CoreData
//
//  Created by Edward Liu on 16/2/18.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PragBook.h"

NS_ASSUME_NONNULL_BEGIN

@interface PragBook (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *authors;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *chapters;

@end

@interface PragBook (CoreDataGeneratedAccessors)

- (void)addAuthorsObject:(NSManagedObject *)value;
- (void)removeAuthorsObject:(NSManagedObject *)value;
- (void)addAuthors:(NSSet<NSManagedObject *> *)values;
- (void)removeAuthors:(NSSet<NSManagedObject *> *)values;

- (void)addChaptersObject:(NSManagedObject *)value;
- (void)removeChaptersObject:(NSManagedObject *)value;
- (void)addChapters:(NSSet<NSManagedObject *> *)values;
- (void)removeChapters:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
