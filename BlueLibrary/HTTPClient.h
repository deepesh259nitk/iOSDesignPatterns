//
//  HTTPClient.h
//  MyLibrary
//
//  Created by Deepesh on 2016-24-01.
//

#import <Foundation/Foundation.h>

@interface HTTPClient : NSObject

- (id)getRequest:(NSString*)url;
- (id)postRequest:(NSString*)url body:(NSString*)body;
- (UIImage*)downloadImage:(NSString*)url;

@end
