//
//  Album+TableRepresentation.h
//  BlueLibrary
//
//  Created by ITRMG on 2016-25-01.
//  Copyright © 2016 Deepesh . All rights reserved.
//

#import "Album.h"

@interface Album (TableRepresentation)

- (NSDictionary*)tr_tableRepresentation;

@end
