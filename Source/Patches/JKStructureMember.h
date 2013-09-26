//
//  JKStructureMember.h
//  QCDemos
//
//  Created by Joris Kluivers on 9/26/13.
//  Copyright (c) 2013 Joris Kluivers. All rights reserved.
//

#import "JKPatch.h"

@interface JKStructureMember : JKPatch

@property(nonatomic, strong) NSObject *inputStructure;
@property(nonatomic, readonly) NSObject *outputMember;

@end
