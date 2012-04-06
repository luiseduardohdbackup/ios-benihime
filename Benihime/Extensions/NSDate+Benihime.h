//
//  NSDate+Benihime.h
//  Benihime
//
//  Created by Shiki on 3/9/12.
//

#import <Foundation/Foundation.h>

@interface NSDate (Benihime)

+ (NSDate *) dateFromString:(NSString *)dateString format:(NSString *)format;

- (NSString *) stringWithFormat:(NSString *)format;

@end
