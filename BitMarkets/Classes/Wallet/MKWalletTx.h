//
//  MKWalletTx.h
//  BitMarkets
//
//  Created by Steve Dekorte on 5/1/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <NavKit/NavKit.h>
#import <BitNashKit/BitNashKit.h>


@interface MKWalletTx : NavInfoNode

@property (strong, nonatomic) BNTx *bnTx;

@end