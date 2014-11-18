study-cocos2d-x-project
===
study-cocos2d-x-project学习进度 
---
cocos2d-x系列教程：http://cn.cocos2d-x.org/tutorial/index?type=cocos2d-x  
cocos2d-x API: http://www.cocos2d-x.org/reference/native-cpp/V2.2.3/index.html  

1.创建了一个空的场景scene  
2.精灵类CCSprite  
3.OpenGl与UIKit坐标系、锚点、addChild()方法    
4.cocos2d-x 文本字体(CCLabelTTF(.ttf) CCLabelBMFont(.fnt) CCLabelAtlas(.plist))  
5.创建菜单 CCMenu CCMenuItem(CCMenuItemLabel CCMenuItemSprite CCMenuItemToggle)  
6.CCNode类与获取当前的语言(国际化) CCApplication::sharedApplication()->getCurrentLanguage()  
7.Schedule 定时器的使用方法    
8.点9图  include "cocos-ext.h"  using namespace cocos2d::extension  类CCScale9Sprite  PreferredSize() CapInsets()   
9.常用数据类型1 CCInteger CCString CCArray   
10.常用数据类型2 CCDictionary create() CCLog   
11.CCActionInstant::runAction(){CCFlipX, CCFlipY, CCHide, CCShow, CCPlace, CCRemoveSelf, CCToggleVisibility...}  
12.CCActionInterval::runAction() {move, jump ,scale, rotate skew, blink, Fade ,Tint} to表示终点，by表示偏移量  
13.CCActionInterval::runAction() { CCSequence, CCSpawn, CCDeplayTime, CCRepeat, CCRepeatForever}   
14.回调动作(CCCallFunc CCCallFuncN CCCallFuncN CCCallFunO)、CCSpeed、CCFollow  
15.CCAnimate CCAnimation 1   方式1：以此加入spriteframe   方法2：多个图片组织在一起，通过坐标定位各个图片并加入到animation。   
16.CCAnimate CCAnimation 2  TexturePacker把多个图片组织在一张图片上，生成SpriteFrames，然后从SpriteFrames中以此读取spriteframe。   
17.CCActionEase  运动中的加速度变化    
18. CCProgressAction 进度条  
19. CCGrideAction 用于产生特效  CCTransionAction 用于场景过度  
20.Scene生命周期  
 