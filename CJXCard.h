//
//  CJXCard.h
//  Matchismo
//
//  Created by CSU-gf on 16/5/4.
//  Copyright © 2016年 CSU-gf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CJXCard : NSObject
@property(nonatomic,strong) NSString *contents;
@property(nonatomic,getter=isChosen) BOOL chosen;
@property(nonatomic,getter=isMatched) BOOL matched;
-(int)match:(NSArray *)otherCards;
@end
