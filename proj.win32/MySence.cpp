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

	CCSprite *background = CCSprite::create("HelloWorld.png");
	background->setPosition(CCPoint(size.width/2,size.height/2));
	this->addChild(background);

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



	/************************************************************************/
	/*  
	CCSprite�����ೣ�÷���
	
	setScale(float fScale)
	setScaleX(float fScaleX)
	setScaleY(float fScaley)

	setRotation(float fRotation)
	setRotationX(float fRotationX)
	setRotationY(float fRotationY)

	setSkewX(float sx)
	setSkewX(float sy)

	setAnchorPoint(const CCPoint &anchor)

	setVisible(bool bVisible)

	setColor(const ccColor &color3)
	
	setOpacity(GLubyte opacity)

	setDisplayFrame(CCSpriteFrame *pNewFrame)

	setTexture(CCTexture2D *texture)



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