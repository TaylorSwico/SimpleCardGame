//
//  CJXCard.m
//  Matchismo
//
//  Created by CSU-gf on 16/5/4.
//  Copyright © 2016年 CSU-gf. All rights reserved.
//

#import "CJXCard.h"

@implementation CJXCard
-(int)match:(NSArray *)otherCards
{
    int score=0;
    for( CJXCard *card in otherCards)
    {
    if([card.contents isEqualToString:self.contents])
    {
        score+=1;
    
    }
    }
    return score;

}
@end
