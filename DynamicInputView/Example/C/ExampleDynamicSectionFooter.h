//
//  ExampleDynamicFooter.h
//  DynamicInputView
//
//  Created by mac on 2020/1/19.
//  Copyright © 2020 GHome. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^ExampleDynamicSectionFooterDidClickSureBlock)(void);

@interface ExampleDynamicSectionFooter : UIView

@property (nonatomic , copy) ExampleDynamicSectionFooterDidClickSureBlock didClickSureBlock;

@end

NS_ASSUME_NONNULL_END
