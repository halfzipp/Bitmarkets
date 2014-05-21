//
//  MKPost.h
//  BitMarkets
//
//  Created by Steve Dekorte on 5/1/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import "MKGroup.h"
#import "MKPostMsg.h"
#import "MKBidMsg.h"

//@class MKPostMsg;
//@class MKBidMsg;

@interface MKPost : MKGroup

@property (strong, nonatomic) NSDate *date;
@property (strong, nonatomic) NSString *status;

// msg properties

@property (strong, nonatomic) NSString *postUuid;

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSNumber *priceInSatoshi;
@property (strong, nonatomic) NSString *description;

@property (strong, nonatomic) NSArray  *regionPath;
@property (strong, nonatomic) NSArray  *categoryPath;
@property (strong, nonatomic) NSString *sellerAddress;
@property (strong, nonatomic) NSArray  *attachments;

- (BOOL)isEditable;
- (BOOL)canBuy;

- (void)setPriceInBtc:(NSNumber *)btcNumber;
- (NSNumber *)priceInBtc;

- (BOOL)placeInMarketsPath;

- (void)copy:(MKPost *)aPost;
- (NSString *)titleOrDefault;

// messages

- (MKPostMsg *)postMsg;

- (MKPostMsg *)sendPostMsg;
- (MKBidMsg *)sendBidMsg;

- (BOOL)isPosted;

// equality

- (NSUInteger)hash;
- (BOOL)isEqual:(id)object;

- (NSNumber *)priceInSatoshi;

@end