//
//  CCSkyBoxEffect.h
//  CCSkyBox
//
//  Created by cyw on 2018/2/5.
//  Copyright © 2018年 cyw. All rights reserved.
//

#import <OpenGLES/ES2/glext.h>
#import <GLKit/GLKit.h>

//GLKNamedEffect 提供基于着色器的OpenGL渲染效果的对象的标准接口
@interface CCSkyBoxEffect : NSObject<GLKNamedEffect>

@property(nonatomic,assign)GLKVector3 center;
@property(nonatomic,assign)GLfloat xSize;
@property(nonatomic,assign)GLfloat ySize;
@property(nonatomic,assign)GLfloat zSize;

//纹理
@property(strong,nonatomic,readonly)GLKEffectPropertyTexture *textureCubeMap;
//变换
@property(strong,nonatomic,readonly)GLKEffectPropertyTransform *transform;

//准备绘制
-(void)prepareToDraw;
//绘制
-(void)draw;

@end
