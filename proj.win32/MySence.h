#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
using namespace cocos2d;
using namespace cocos2d::extension;


class MySence : public CCLayer
{
public:
	MySence();
	~MySence();
	virtual bool init();
	static CCScene * scene();
	
	void menuCallback(CCObject* pSender);
	void scheCallback(float dt);
	void update(float dt);
	void funcCallBack();
	void funcCallBack(CCNode *pSender);
	void funcCallBack(CCNode *pSender, void* data);
	CCLabelTTF *label;
	int n;
	char str[50];

	CCSize size;
	CCArray *arr;

	CREATE_FUNC(MySence);


	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	virtual void onExitTransitionDidStart();
	
	
	void turnToScene();
	void loadingCallBack(CCObject *pSender);
	CCLabelTTF *labelLoading;
	CCLabelTTF *labelPercent;
	int numberOfSprites;        //sprite总数
	int numberOfLoadedSprites;   //已加载的sprite数目

	CCProgressTimer *loadProgress;

};

