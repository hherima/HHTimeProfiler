//
//  TPRecordModel.h
//  VideoIphone
//
//  Created by 吴凯凯 on 2019/6/24.
//  Copyright © 2019 com.baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPRecordModel : NSObject <NSCopying>

@property (nonatomic, strong)Class cls;
@property (nonatomic)SEL sel;
@property (nonatomic, assign)BOOL is_objc_msgSendSuper;
@property (nonatomic, assign)uint64_t costTime; //单位：纳秒（百万分之一秒）
@property (nonatomic, assign)uint64_t begin;
@property (nonatomic, assign)uint64_t end;
@property (nonatomic, assign)int depth;

// 辅助堆栈排序
@property (nonatomic, assign)int total;
@property (nonatomic)BOOL isUsed;

//call 次数
@property (nonatomic, assign)int callCount;

- (instancetype)initWithCls:(Class)cls sel:(SEL)sel bTime:(uint64_t)begin eTime:(uint64_t)end  depth:(int)depth total:(int)total is_objc_msgSendSuper:(BOOL)is_objc_msgSendSuper;

- (BOOL)isEqualRecordModel:(TPRecordModel *)model;

@end

NS_ASSUME_NONNULL_END
