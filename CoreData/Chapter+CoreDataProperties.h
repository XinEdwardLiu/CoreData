//
//  Chapter+CoreDataProperties.h
//  CoreData
//
//  Created by Edward Liu on 16/2/18.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Chapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface Chapter (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *number;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) PragBook *book;

@end

NS_ASSUME_NONNULL_END
