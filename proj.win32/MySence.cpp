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
	CCSprite *background = CCSprite::create("HelloWorld.png");
	background->setPosition(CCPoint(size.width/2,size.height/2));
	this->addChild(background,1);

	//cocos2d-x font
	//CCLabelTTF CCLabelBMFont CCLabelAtlas
	CCLabelTTF *label1 = CCLabelTTF::create("cocos2d-x","Marker Felt",25);
	label1->setPosition(ccp(size.width/2,size.height/2));
	label1->setColor(ccc3(255,0,0));
	this->addChild(label1,2);

	//CCLabelBMFont *label = CCLabelBMFont::create("cocos2d-x", "");

	//CCLabelAtlas *label3 = CCLabelAtlas::create("COCOS", "");

	





	
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