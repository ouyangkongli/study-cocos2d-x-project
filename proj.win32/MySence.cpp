#include "MySence.h"


MySence::MySence()
{
}


MySence::~MySence()
{
}


bool MySence::init()
{
	return true;
}
CCScene * MySence::scene()
{
	CCScene *scene = CCScene::create();
	
	MySence *layer = MySence::create();

	scene->addChild(layer);

	return scene;

}