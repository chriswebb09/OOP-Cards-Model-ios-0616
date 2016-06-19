//
//  FISCard.h
//  OOP-Cards-Model
//
//  Created by Christopher Webb-Orenstein on 6/15/16.
//  Copyright © 2016 Al Tyus. All rights reserved.
//

@interface FISCard : NSObject

+ (NSArray *)validSuits;
+ (NSArray *)validRanks;
+ (NSUInteger)getCardValue:(NSString *)cardRank;

@property (strong, nonatomic, readonly) NSString *suit;
@property (strong, nonatomic, readonly) NSString *rank;
@property (strong, nonatomic, readonly) NSString *cardLabel;
@property (nonatomic, readonly) NSUInteger cardValue;

- (instancetype)init;

- (instancetype)initWithSuit:(NSString *)suit
                        rank:(NSString *)rank;

@end
