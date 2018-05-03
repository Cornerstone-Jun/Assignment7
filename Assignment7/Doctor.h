//
//  Doctor.h
//  Assignment7
//
//  Created by Jumpei on 2018-04-23.
//  Copyright © 2018 Jumpei. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Patient;

@interface Doctor : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *specialization;
@property (nonatomic, strong) NSMutableArray *patientList;

@property (nonatomic, strong) NSString *prescription;
@property (nonatomic, strong) NSMutableArray *patientList;

- (instancetype)initWithName: (NSString *) name AndSpecialty:(NSString *) specialization;
- (BOOL) AddPatientIfPatientHasValidHealthCard: (Patient *) pat;
- (void) askSymptom :(Patient *) pat;
@end
