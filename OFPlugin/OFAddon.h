//
//  OFAddon.h
//  OFPlugin
//
//  Created by Adam Carlucci on 11/9/2013.
//  Copyright (c) 2013 lol. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OFAddon : NSObject

+ (instancetype) addonWithPath:(NSString *)path name:(NSString *)name;

@property (nonatomic, strong) NSString * path;
@property (nonatomic, strong) NSString * name;

@end