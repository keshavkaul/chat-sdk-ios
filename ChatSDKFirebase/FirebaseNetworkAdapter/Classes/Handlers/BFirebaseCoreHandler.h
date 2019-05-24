//
//  BFirebaseMessagingHandler.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 12/11/2016.
//
//

#import <ChatSDK/BAbstractCoreHandler.h>

@interface BFirebaseCoreHandler : BAbstractCoreHandler

/**
 * @brief Convert a date object to a Firebase timestamp
 */
+(NSNumber *) dateToTimestamp: (NSDate *) date;

/**
 * @brief Convert a Firebase timestamp to a date object
 */
+(NSDate *) timestampToDate: (NSNumber *) timestamp;


-(RXPromise *) createThreadWithUsers: (NSArray *) users
                            threadId: (NSString *) threadId
                          threadName: (NSString *) threadName
                                type: (bThreadType) type
                       threadCreated: (void(^)(NSError * error, id<PThread> thread)) threadCreated;

@end
