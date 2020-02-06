#pragma once
#include"Base_Scene.h"
#include "Stage1_1.h"
#include "Stage1_2.h"
#include "Stage1_3.h"
#include "Player.h"

class Stage1:public Base_Scene
{
private:



public:
	Stage1();
	~Stage1();

	void Update();
	void Draw();

	Player player;
	Stage1_1 stage1_1;
	Stage1_2 stage1_2;
	Stage1_3 stage1_3;

};

