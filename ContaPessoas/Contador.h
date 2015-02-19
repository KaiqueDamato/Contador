//
//  Contador.h
//  ContaPessoas
//
//  Created by Vinicius Miana on 2/18/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//
@protocol willRefresh

@required

- (void)refresh;

@end

@interface Contador : NSObject {
    id <willRefresh>delegate;
}

@property (retain)id delegate;
- (void)maisUmCueca;
- (void)maisUmaGata;

+ (instancetype)sharedInstance;
-(int)getBoys;
-(int)getGirls;
-(int)getTotal;

@end

