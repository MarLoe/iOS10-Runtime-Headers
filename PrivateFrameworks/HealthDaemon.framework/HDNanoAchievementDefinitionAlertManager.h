/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoAchievementDefinitionAlertManager : HDAchievementDefinitionAlertManager

+ (id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2;
+ (void)_clearBookkeepingKeyValuesWithProfile:(id)arg1;
+ (id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2 getTaskDate:(id*)arg3;
+ (bool)isDefinitionIdentifierAvailableOnCompanion:(id)arg1 withProfile:(id)arg2 error:(id*)arg3;

- (bool)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id*)arg4;
- (bool)markDefinitionIdentifiers:(id)arg1 asAvailable:(bool)arg2 withProfile:(id)arg3 error:(id*)arg4;

@end
