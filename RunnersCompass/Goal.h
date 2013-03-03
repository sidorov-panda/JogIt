//
//  Goal.h
//  RunnersCompass
//
//  Created by Geoff MacDonald on 2013-02-23.
//  Copyright (c) 2013 Geoff MacDonald. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RunEvent.h" //for metric enum

@interface Goal : NSObject

typedef enum
{
    GoalTypeTotalDistance,
    GoalTypeOneDistance,
    GoalTypeCalories,
    GoalTypeRace,
} GoalType;

@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSNumber * value;
@property (nonatomic, retain) NSDate * time;
@property (nonatomic, retain) NSNumber * activityCount;
@property (nonatomic, retain) NSString * race;
@property (nonatomic, retain) NSString * weight;
@property (nonatomic, retain) NSString * metricValueChange;
@property (nonatomic) GoalType type;//also defines the metric to use
@property (nonatomic) CGFloat progress;//also defines the metric to use
@property (nonatomic, retain) NSDictionary * raceDictionary;
@property (nonatomic, retain) NSDictionary * fatDictionary;

-(id)initWithType:(GoalType)type;
-(NSString*)getName;
-(NSArray*)getWeightNames;
-(NSArray*)getRaceNames;
-(void)save;
-(NSString *)stringForDescription;
-(NSString *)stringForHeaderDescription;
-(NSString*)stringForSubtitle;
-(NSString *)stringForEdit2;
-(NSString *)stringForEdit1;
-(BOOL)validateGoalEntry;

@end