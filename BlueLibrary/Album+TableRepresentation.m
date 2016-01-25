//
//  Album+TableRepresentation.m
//  BlueLibrary
//
//  Created by ITRMG on 2016-25-01.
//  Copyright © 2016 Deepesh . All rights reserved.
//

#import "Album+TableRepresentation.h"

@implementation Album (TableRepresentation)

- (NSDictionary*)tr_tableRepresentation
{
    return @{@"titles":@[@"Artist", @"Album", @"Genre", @"Year"],
             @"values":@[self.artist, self.title, self.genre, self.year]};
   
}

@end
