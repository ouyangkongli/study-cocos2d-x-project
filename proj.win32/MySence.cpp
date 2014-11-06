#include "MySence.h"
#include "HelloWorldScene.h"

MySence::MySence()
{
}


MySence::~MySence()
{
}


bool MySence::init()
{
	size = CCDirector::sharedDirector()->getWinSize();

	//////////////////////////////////////////////////////////////////////////
	//CCAnimate CCAnimation
	//////////////////////////////////////////////////////////////////////////
	/*CCSprite *sp = CCSprite::create("grossini_dance_01.png");
	sp->setPosition(ccp(size.width/2, size.height/2));
	addChild(sp);*/
	//CCAnimation *animation = CCAnimation::create();
	//char str[50] = { 0 };
	//for (int i = 1; i <= 14; i++)
	//{
	//	sprintf(str, "grossini_dance_%02d.png", i);
	//	animation->addSpriteFrameWithFileName(str);
	//}
	//animation->setDelayPerUnit(3.0f / 14);
	//animation->setRestoreOriginalFrame(true);
	//sp->runAction(CCRepeatForever::create(CCAnimate::create(animation)));

	//CCTexture2D *texture = CCTextureCache::sharedTextureCache()->addImage("dragon_animation.png");
	//
	//CCSpriteFrame *frame0 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 0, 132 * 0, 132, 132));
	//CCSpriteFrame *frame1 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 1, 132 * 0, 132, 132));
	//CCSpriteFrame *frame2 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 2, 132 * 0, 132, 132));
	//CCSpriteFrame *frame3 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 3, 132 * 0, 132, 132));
	//CCSpriteFrame *frame4 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 0, 132 * 1, 132, 132));
	//CCSpriteFrame *frame5 = CCSpriteFrame::createWithTexture(texture, CCRectMake(132 * 1, 132 * 1, 132, 132));

	//CCArray *arr = CCArray::create();
	//arr->addObject(frame0);
	//arr->addObject(frame1);
	//arr->addObject(frame2);
	//arr->addObject(frame3);
	//arr->addObject(frame4);
	//arr->addObject(frame5);

	//CCSprite *sp = CCSprite::createWithSpriteFrame(frame0);
	//sp->setPosition(ccp(size.width / 2, size.height / 2));
	//addChild(sp);

	//CCAnimation *animation = CCAnimation::createWithSpriteFrames(arr, 0.2f);
	//sp->runAction(CCRepeatForever::create(CCAnimate::create(animation)));



	//////////////////////////////////////////////////////////////////////////
	//CCSpeed
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp = CCSprite::create();
	//sp->initWithFile("cocos2d.png");
	//sp->setPosition(ccp(size.width*0.2, size.height*0.2));
	//addChild(sp);

	//CCActionInterval *move = CCMoveTo::create(2.0f, ccp(size.width*0.8, size.height*0.8));
	///*CCSpeed *speed = CCSpeed::create(move, 2);
	//sp->runAction(speed);*/
	//CCFollow *follow = CCFollow::create(sp, CCRectZero);
	//CCActionInstant *func = CCCallFuncND::create(this, callfuncND_selector(MySence::funcCallBack), (void *)5090041);
	//sp->runAction(CCSequence::create(move, func, NULL));
	//this->runAction(follow);

	
	//////////////////////////////////////////////////////////////////////////
	//CCCallFunc CCCallFuncN CCCallFuncN CCCallFunO
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp = CCSprite::create();
	//sp->initWithFile("cocos2d.png");
	//sp->setPosition(ccp(size.width*0.2, size.height*0.2));
	//addChild(sp);

	//CCActionInterval *move = CCMoveTo::create(2.0f, ccp(size.width*0.8, size.height*0.8));
	////CCActionInstant *func = CCCallFunc::create(this, callfunc_selector(MySence::funcCallBack));
	////CCActionInstant *funcN = CCCallFuncN::create(this, callfuncN_selector(MySence::funcCallBack));
	//CCActionInstant *funcND = CCCallFuncND::create(this, callfuncND_selector(MySence::funcCallBack),(void *)999);
	//sp->runAction(CCSequence::create(move, funcND, NULL));

	
	//////////////////////////////////////////////////////////////////////////
	//持续CCAction {move, jump ,scale, rotate skew, blink, Fade ,Tint}
	//CardinalSpline,
	//CCSequence, CCSpawn, CCDelayTime, CCRepeat, CCRepeatForever
	//to表示终点，by表示偏移量
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp = CCSprite::create();
	//sp->initWithFile("cocos2d.png");
	//sp->setPosition(ccp(size.width*0.2, size.height*0.2));
	//addChild(sp);
	////CCActionInterval *moveTo = CCMoveTo::create(3.0f, ccp(size.width*0.8, size.height*0.8));
	//////sp->runAction(moveTo);
	
	////CCActionInterval *moveBy = CCMoveBy::create(3.0f, ccp(size.width*0.8, size.height*0.8));
	////sp->runAction(moveBy);

	//CCPointArray *arr = CCPointArray::create(10);
	//arr->addControlPoint(ccp(size.width*0.2, size.height*0.2));
	//arr->addControlPoint(ccp(size.width*0.2, size.height*0.8));
	//arr->addControlPoint(ccp(size.width*0.8, size.height*0.8));
	//arr->addControlPoint(ccp(size.width*0.8, size.height*0.2));
	//arr->addControlPoint(ccp(size.width*0.2, size.height*0.2));

	//CCActionInterval *spline = CCCardinalSplineTo::create(3.0f, arr, 3);
	////sp->runAction(spline);
	//
	//CCActionInterval *scale = CCScaleBy::create(3.0f, 2.0f);
	//
	///*CCActionInterval *seq = CCSequence::create(spline, scale, NULL);
	//sp->runAction(seq);*/
	//
	///*CCActionInterval *spawn = CCSpawn::create(spline, scale, NULL);
	//sp->runAction(spawn);*/
	//CCActionInterval *reScale = scale->reverse();
	//CCActionInterval *seq = CCSequence::create(scale, reScale, NULL);
	//CCActionInterval *repeat = CCRepeat::create(seq,3);
	////sp->runAction(repeat);
	//sp->runAction(CCRepeatForever::create(seq));

	/*CCActionInterval *jumpTo = CCJumpTo::create(4.5f, ccp(size.width*0.8, size.height*0.8), 200, 3);
	sp->runAction(jumpTo);*/

	/*CCActionInterval *scaleTo = CCScaleTo::create(5, 3);
	sp->runAction(scaleTo);*/

	/*CCActionInterval *rotateTo = CCRotateTo::create(3.0f, 90);
	sp->runAction(rotateTo);*/

	//sp->runAction(CCBlink::create(5, 10));

	//sp->setOpacity(0);
	//sp->runAction(CCFadeIn::create(3.0));//从不可见到可见

	//sp->runAction(CCTintTo::create(2.5f, 255, 0, 0));



	//////////////////////////////////////////////////////////////////////////
	//瞬时CCAction::runAction() {CCFlipX, CCFlipY, CCHide, CCShow, CCPlace, CCRemoveSelf, CCToggleVisibility...}
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp = CCSprite::create();
	//sp->initWithFile("cocos2d.png");
	//sp->setPosition(ccp(size.width*0.4, size.height/2));
	//addChild(sp);

	//CCSprite *sp2 = CCSprite::create("cocos2d.png");
	//sp2->setPosition(ccp(size.width * 0.6, size.height/2));
	//addChild(sp2);
	//sp2->setVisible(false);
	////CCActionInstant *flipX = CCFlipX::create(true);
	////sp->runAction(flipX);
	////CCActionInstant *flipY = CCFlipY::create(true);
	////sp->runAction(flipY);

	//sp->runAction(CCToggleVisibility::create());
	//sp2->runAction(CCToggleVisibility::create());

	
	//////////////////////////////////////////////////////////////////////////
	//create
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp = CCSprite::create();
	//sp->initWithFile("cocos2d.png");
	//sp->setPosition(ccp(size.width/2,size.height/2));
	//addChild(sp);

	//////////////////////////////////////////////////////////////////////////
	//CCLog
	//////////////////////////////////////////////////////////////////////////
	/*CCLog("123");
	CCLOG("123");*/
	
	
	//////////////////////////////////////////////////////////////////////////
	//CCDictionary
	//////////////////////////////////////////////////////////////////////////
	//CCDictionary *dict = CCDictionary::create();

	//CCString *str1 = CCString::create("111");
	//CCString *str2 = CCString::create("222");
	//dict->setObject(str1, "key1");
	//dict->setObject(str2, "key2");
	//CCString *tmpStr = (CCString*)dict->objectForKey("key1");
	//CCLog("%s", tmpStr->getCString());
	//CCString *str3 = CCString::create("333");
	//dict->setObject(str3, "key1");
	//CCLog("%s", ((CCString*)dict->objectForKey("key1"))->getCString());



	//////////////////////////////////////////////////////////////////////////
	//CCInteger CCString CCArray
	//////////////////////////////////////////////////////////////////////////
	//CCInteger* intValue = CCInteger::create(13);
	//CCLOG("%d", intValue->getValue());

	//CCString *str1 = CCString::create("123456789*******");
	//ccs("123456789*******");

	//CCString *str2 = CCString::createWithFormat("intvalue = %d", intValue);

	//arr = CCArray::create();
	//arr->retain();//保留  important
	//arr->addObject(CCSprite::create("grossini_dance_01.png"));
	//arr->addObject(CCSprite::create("grossini_dance_02.png"));
	//arr->addObject(CCSprite::create("grossini_dance_03.png"));
	//arr->addObject(CCSprite::create("grossini_dance_04.png"));
	//arr->addObject(CCSprite::create("grossini_dance_05.png"));
	//arr->addObject(CCSprite::create("grossini_dance_06.png"));
	//arr->addObject(CCSprite::create("grossini_dance_07.png"));
	//arr->addObject(CCSprite::create("grossini_dance_08.png"));
	//arr->addObject(CCSprite::create("grossini_dance_09.png"));
	//arr->addObject(CCSprite::create("grossini_dance_10.png"));
	//arr->addObject(CCSprite::create("grossini_dance_11.png"));
	//arr->addObject(CCSprite::create("grossini_dance_12.png"));
	//arr->addObject(CCSprite::create("grossini_dance_13.png"));
	//arr->addObject(CCSprite::create("grossini_dance_14.png"));

	//CCLOG("arr count: %d", arr->count());
	//CCMenuItemFont *item = CCMenuItemFont::create("click", this, menu_selector(MySence::menuCallback));
	//item->setPosition(ccp(size.width/2, size.height*0.8));
	//CCMenu *menu = CCMenu::create(item, NULL);
	//menu->setPosition(CCPointZero);
	//addChild(menu);

	

	//////////////////////////////////////////////////////////////////////////
	//点9图
	//////////////////////////////////////////////////////////////////////////
	//CCSprite *sp1 = CCSprite::create("green_edit.png");
	//sp1->setPosition(ccp(size.width / 2, size.height*0.8));
	//addChild(sp1);
	//sp1->setScaleX(10.0f);
	//sp1->setScaleY(3.0f);

	//CCScale9Sprite *sp2 = CCScale9Sprite::create("yellow_edit.png");
	//sp2->setPosition(ccp(size.width / 2, size.height*0.6));
	//addChild(sp2);
	//sp2->setPreferredSize(CCSize(size.width*0.8, size.height*0.3));
	//sp2->setCapInsets(CCRect(10,10,8,8));


	
	//cocos2d-x CCSprite
	/*
	CCSprite *sp1 = CCSprite::create("cocos2d.png");
	sp1->setPosition(ccp(size.width*0.2, size.height*0.7));
	this->addChild(sp1);

	CCSprite *sp2 = CCSprite::create("cocos2d.png", CCRect(83, 101, 84, 102));
	sp2->setPosition(ccp(size.width*0.4, size.height*0.7));
	this->addChild(sp2);

	CCTexture2D *texture = CCTextureCache::sharedTextureCache()->addImage("cocos2d.png");

	CCSprite *sp3 = CCSprite::createWithTexture(texture);
	sp3->setPosition(ccp(size.width*0.6, size.height*0.7));
	this->addChild(sp3);

	CCSprite *sp4 = CCSprite::createWithTexture(texture, CCRect(0,0,130,130));
	this->addChild(sp4);
	sp4->setPosition(ccp(size.width*0.8, size.height*0.7));
	sp4->setRotation(-20.0f);


	CCSpriteFrame *frame = CCSpriteFrame::create("cocos2d.png", CCRect(0,0,160,200));

	CCSprite *sp5 = CCSprite::createWithSpriteFrame(frame);
	sp5->setPosition(ccp(size.width*0.3, size.height*0.3));
	sp5->setRotationX(20.0f);

	this->addChild(sp5);

	CCSprite *sp6 = CCSprite::createWithSpriteFrame(frame);
	sp6->setPosition(ccp(size.width*0.5, size.height*0.3));
	//	sp6->setRotationX(-30.0f);
	sp6->setSkewX(20.0f);
	this->addChild(sp6);
	sp6->setColor(ccc3(255,0,0));
		
	*/
	//CCSprite *background = CCSprite::create("HelloWorld.png");
	//background->setPosition(CCPoint(size.width/2,size.height/2));
	//this->addChild(background,1);

	
	
	//////////////////////////////////////////////////////////////////////////
	//cocos2d-x font
	//////////////////////////////////////////////////////////////////////////
	//CCLabelTTF CCLabelBMFont CCLabelAtlas
	//CCLabelTTF *label1 = CCLabelTTF::create("cocos2d-x","Marker Felt",25);
	//label1->setPosition(ccp(size.width/2,size.height/2));
	//label1->setColor(ccc3(255,0,0));
	//this->addChild(label1,2);

	//CCLabelBMFont *label2 = CCLabelBMFont::create("cocos2d-x", "fonts/boundsTestFont.fnt");
	//label2->setPosition(ccp(size.width / 2, size.height / 3));
	//label2->setColor(ccc3(0,0,255));
	//addChild(label2);

	//CCLabelAtlas *label3 = CCLabelAtlas::create("COCOS", "fonts/larabie-16.plist");
	//label3->setPosition(ccp(size.width / 4, size.height / 4));
	//addChild(label3);
	//label3->setColor(ccc3(0,255,0));

	

	//////////////////////////////////////////////////////////////////////////
	//CCMenu
	//firstly, create CCMenuItem(CCMenuItemLabel, CCMenuItemSprite, CCMenuItemToggle),secondly, create CCMenu and add CCMenuItems in it.
	//////////////////////////////////////////////////////////////////////////
	//CCLabelBMFont *label1 = CCLabelBMFont::create("cocos2d-x", "fonts/boundsTestFont.fnt");
	//label1->setColor(ccc3(255,0,0));
	////label1->setPosition(ccp(size.width / 2, size.height / 3));
	//CCMenuItemLabel *item1 = CCMenuItemLabel::create(label1, this, menu_selector(MySence::menuCallback));
	//item1->setPosition(ccp(size.width / 2, size.height*0.95));

	//CCMenuItemFont *item2= CCMenuItemFont::create("item2", this, menu_selector(MySence::menuCallback));
	//item2->setPosition(ccp(size.width / 2, size.height*0.75));

	//CCSprite *mySprite1 = CCSprite::create("btn-about-normal.png");
	//CCSprite *mySprite2 = CCSprite::create("btn-about-selected.png");
	//CCSprite *mySprite3 = CCSprite::create("btn-play-normal.png");
	//CCSprite *mySprite4 = CCSprite::create("btn-play-selected.png");
	//CCMenuItemSprite *item3 = CCMenuItemSprite::create(mySprite3, mySprite4, this, menu_selector(MySence::menuCallback));
	//item3->setPosition(ccp(size.width / 2, size.height*0.55));
	//CCMenuItemImage *item4 = CCMenuItemImage::create("btn-about-normal.png","btn-about-selected.png",this, menu_selector(MySence::menuCallback));
	//item4->setPosition(ccp(size.width / 2, size.height*0.35));
	//CCMenuItemToggle *item5 = CCMenuItemToggle::createWithTarget(this, menu_selector(MySence::menuCallback),CCMenuItemFont::create("ON"), CCMenuItemFont::create("OFF"), NULL);
	//item5->setPosition(ccp(size.width/2, size.height * 0.15));

	//CCMenu *menu = CCMenu::create(item1,item2,item3, item4, item5, NULL);
	//menu->setPosition(CCPointZero);
	//this->addChild(menu);
	


	//////////////////////////////////////////////////////////////////////////
	//get Current Language
	//////////////////////////////////////////////////////////////////////////
	//CCLabelTTF *label1 = CCLabelTTF::create("", "Marker Felt", 35);
	//label1->setPosition(ccp(size.width / 2, size.height / 2));
	//LanguageType curLanguageType = CCApplication::sharedApplication()->getCurrentLanguage();
	//addChild(label1);
	//switch (curLanguageType)
	//{
	//case cocos2d::kLanguageEnglish:
	//	label1->setString("current language is English");
	//	break;
	//case cocos2d::kLanguageChinese:
	//	label1->setString("current language is Chinese");
	//	break;
	//case cocos2d::kLanguageFrench:
	//	break;
	//case cocos2d::kLanguageItalian:
	//	break;
	//case cocos2d::kLanguageGerman:
	//	break;
	//case cocos2d::kLanguageSpanish:
	//	break;
	//case cocos2d::kLanguageDutch:
	//	break;
	//case cocos2d::kLanguageRussian:
	//	break;
	//case cocos2d::kLanguageKorean:
	//	break;
	//case cocos2d::kLanguageJapanese:
	//	break;
	//case cocos2d::kLanguageHungarian:
	//	break;
	//case cocos2d::kLanguagePortuguese:
	//	break;
	//case cocos2d::kLanguageArabic:
	//	break;
	//default:
	//	break;
	//}


	//////////////////////////////////////////////////////////////////////////
	//schedule
	//////////////////////////////////////////////////////////////////////////
	
	//label = CCLabelTTF::create("0", "Consolas", 30);
	//label->setPosition(ccp(size.width / 2, size.height / 2));
	//this->addChild(label);

	///*schedule(schedule_selector(MySence::scheCallback),3.0f ,100, 1);
	//n = 0;*/

	//scheduleOnce(schedule_selector(MySence::scheCallback), 3.0f);
////	scheduleUpdate();

	



	
	/************************************************************************/
	/*  
	CCSprite精灵类常用方法
	
	setScale(float fScale)
	setScaleX(float fScaleX)
	setScaleY(float fScaley)

	setRotation(float fRotation)
	setRotationX(float fRotationX)
	setRotationY(float fRotationY)

	setSkewX(float sx)
	setSkewX(float sy)

	setAnchorPoint(const CCPoint &anchor)  //锚点 setAnchorPoint(CCPointZero);

	setVisible(bool bVisible)

	setColor(const ccColor &color3)
	
	setOpacity(GLubyte opacity)

	setDisplayFrame(CCSpriteFrame *pNewFrame)

	setTexture(CCTexture2D *texture)



	*/

	/*
	addChild()的三种重载形式
	1.一个参数	普通
	2.2个参数	加一个优先级
	3.3个参数	加一个tag，方便其它方法调用
	*/
	/************************************************************************/
	

	return true;
}
CCScene * MySence::scene()
{
	CCScene *scene = CCScene::create();
	
	MySence *layer = MySence::create();

	scene->addChild(layer);

	return scene;

}

void MySence::menuCallback(CCObject *pSender)
{
	CCSprite *sp = (CCSprite *)arr->objectAtIndex(9);
	sp->setPosition(ccp(size.width / 2, size.height / 2));
	addChild(sp);
}

void MySence::scheCallback(float dt)
{
	//sprintf(str, "%d", n++);
	//label->setString(str);

	CCScene *s = HelloWorld::scene();
	CCDirector::sharedDirector()->replaceScene(s);
}

void MySence::update(float dt)
{

}

void MySence::funcCallBack()
{
	CCLOG("action end");
}

void MySence::funcCallBack(CCNode *pSender)
{
	CCSprite *sp = (CCSprite*)pSender;
	sp->setPosition(ccp(size.width / 2, size.height / 2));
}

void MySence::funcCallBack(CCNode *pSender, void* data)
{
	CCSprite *sp = (CCSprite*)pSender;
	/*sp->setPosition(ccp(size.width / 2, size.height / 2));*/
	CCLOG("%f, %f", sp->getPositionX(),sp->getPositionY());

	CCPoint pos = this->convertToWorldSpace(sp->getPosition());
	CCLOG("%f, %f", pos.x, pos.y);
}