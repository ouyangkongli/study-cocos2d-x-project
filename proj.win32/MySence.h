#pragma once

#include "cocos2d.h"

using namespace cocos2d;


class MySence : public CCLayer
{
public:
	MySence();
	~MySence();
	virtual bool init();
	static CCScene * scene();
	
	void menuCallback(CCObject* pSender);

	CREATE_FUNC(MySence);

};

