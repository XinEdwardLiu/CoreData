//
//  Author+CoreDataProperties.h
//  CoreData
//
//  Created by Edward Liu on 16/2/18.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Author.h"

NS_ASSUME_NONNULL_BEGIN

@interface Author (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *firstName;
@property (nullable, nonatomic, retain) NSString *lastName;
@property (nullable, nonatomic, retain) NSSet<PragBook *> *books;

@end

@interface Author (CoreDataGeneratedAccessors)

- (void)addBooksObject:(PragBook *)value;
- (void)removeBooksObject:(PragBook *)value;
- (void)addBooks:(NSSet<PragBook *> *)values;
- (void)removeBooks:(NSSet<PragBook *> *)values;

@end

NS_ASSUME_NONNULL_END
