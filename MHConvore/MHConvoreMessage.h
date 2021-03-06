//
//  MHConvMessage.h
//  Convore
//
//  Created by Mikael Hallendal on 2011-02-15.
//  Copyright 2011 Mikael Hallendal. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MHConvoreUser;
@class MHConvoreTopic;

@interface MHConvoreMessage : NSObject {
@private
    MHConvoreUser *user;
    MHConvoreTopic *topic;
    NSString *groupId;
    NSDate *date;
    NSString *messageId;
    NSString *message;
    NSString *renderedMessage;
}
@property(nonatomic, retain) MHConvoreUser *user;
@property(nonatomic, retain) MHConvoreTopic *topic;
@property(nonatomic, retain) NSString *groupId;
@property(nonatomic, retain) NSDate *date; // Not implemented
@property(nonatomic, copy) NSString *messageId;
@property(nonatomic, copy) NSString *message;
@property(nonatomic, copy) NSString *renderedMessage;

- (id)initWithDictionary:(NSDictionary *)dict;

@end
