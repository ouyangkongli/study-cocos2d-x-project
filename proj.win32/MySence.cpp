#include "MySence.h"


MySence::MySence()
{
}


MySence::~MySence()
{
}


bool MySence::init()
{
	CCSize size = CCDirector::sharedDirector()->getWinSize();

	
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
	CCLabelBMFont *label1 = CCLabelBMFont::create("cocos2d-x", "fonts/boundsTestFont.fnt");
	label1->setColor(ccc3(255,0,0));
	//label1->setPosition(ccp(size.width / 2, size.height / 3));
	CCMenuItemLabel *item1 = CCMenuItemLabel::create(label1, this, menu_selector(MySence::menuCallback));
	item1->setPosition(ccp(size.width / 2, size.height*0.95));

	CCMenuItemFont *item2= CCMenuItemFont::create("item2", this, menu_selector(MySence::menuCallback));
	item2->setPosition(ccp(size.width / 2, size.height*0.75));

	CCSprite *mySprite1 = CCSprite::create("btn-about-normal.png");
	CCSprite *mySprite2 = CCSprite::create("btn-about-selected.png");
	CCSprite *mySprite3 = CCSprite::create("btn-play-normal.png");
	CCSprite *mySprite4 = CCSprite::create("btn-play-selected.png");
	CCMenuItemSprite *item3 = CCMenuItemSprite::create(mySprite3, mySprite4, this, menu_selector(MySence::menuCallback));
	item3->setPosition(ccp(size.width / 2, size.height*0.55));
	CCMenuItemImage *item4 = CCMenuItemImage::create("btn-about-normal.png","btn-about-selected.png",this, menu_selector(MySence::menuCallback));
	item4->setPosition(ccp(size.width / 2, size.height*0.35));
	CCMenuItemToggle *item5 = CCMenuItemToggle::createWithTarget(this, menu_selector(MySence::menuCallback),CCMenuItemFont::create("ON"), CCMenuItemFont::create("OFF"), NULL);
	item5->setPosition(ccp(size.width/2, size.height * 0.15));

	CCMenu *menu = CCMenu::create(item1,item2,item3, item4, item5, NULL);
	menu->setPosition(CCPointZero);
	this->addChild(menu);




	
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

}