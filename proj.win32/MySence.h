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

	CCLabelTTF *label;
	int n;
	char str[50];

	CREATE_FUNC(MySence);

};

