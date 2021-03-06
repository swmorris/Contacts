//
//  ContactPhoneNumbers.h
//  Contacts
//
//  Created by Spencer Morris on 1/21/15.
//  Copyright (c) 2015 SolsticeMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContactPhoneNumbers : NSObject

- (id)initWithDictionary:(NSDictionary *)dictionary;

- (NSString *)mainPhoneNumber;
- (NSString *)cellPhoneNumber;
- (NSString *)homePhoneNumber;
- (NSString *)workPhoneNumber;

@end
