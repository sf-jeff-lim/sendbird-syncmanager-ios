//
//  SBSMChannelCollection.h
//  SyncManager
//
//  Created by sendbird-young on 2018. 6. 20..
//  Copyright © 2018년 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBDBaseChannel+SyncManager.h"
#import "SBSMObject.h"
#import "SBSMComparator.h"
#import "SBSMConstants.h"

@protocol SBSMChannelQuery;
@class SBSMChannelCollection;

@protocol SBSMChannelCollectionDelegate <NSObject>

- (void)collection:(nonnull SBSMChannelCollection *)collection
   didReceiveEvent:(SBSMChannelEventAction)action
          channels:(nonnull NSArray <SBDGroupChannel *> *)channels;

@end

@interface SBSMChannelCollection : NSObject <SBSMComparator>

@property (weak, atomic, nullable) id<SBSMChannelCollectionDelegate> delegate;
@property (strong, nonatomic, readonly, nonnull) SBDGroupChannelListQuery *query;
@property (strong, nonatomic, readonly, nonnull) NSArray <SBDGroupChannel *> *channels;

/**
 *  DO NOT USE this initializer. Use `initWithQuery:` instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

+ (nullable instancetype)collectionWithQuery:(nonnull SBDGroupChannelListQuery *)query;
- (nullable instancetype)initWithQuery:(nonnull SBDGroupChannelListQuery *)query
NS_DESIGNATED_INITIALIZER;
- (void)remove;

- (void)fetchWithCompletionHandler:(nullable SBSMErrorHandler)completionHandler;

@end

