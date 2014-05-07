//
//  MKBuyBid.h
//  BitMarkets
//
//  Created by Steve Dekorte on 5/6/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import "MKGroup.h"

@interface MKBuyBid : MKGroup

- (BOOL)wasSent;
- (BOOL)wasAccepted;
- (BOOL)wasRejected;

@end