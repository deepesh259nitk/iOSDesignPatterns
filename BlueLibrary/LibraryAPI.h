//
//  LibraryAPI.h
//  BlueLibrary
//
//  Created by Deepesh on 2016-24-01.
//

#import <Foundation/Foundation.h>
#import "Album.h"

@interface LibraryAPI : NSObject

+ (LibraryAPI*)sharedInstance;
- (NSArray*)getAlbums;
- (void)addAlbum:(Album*)album atIndex:(int)index;
- (void)deleteAlbumAtIndex:(int)index;

@end
