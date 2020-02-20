#pragma once
#include"Base_Scene.h"
#include"Player.h"
#include"Stage1.h"
#include"Stage1_1.h"
#include"Stage1_2.h"
#include"Stage1_3.h"
class Stage1:public Base_Scene
{
private:

	int pos_X;//player�ɓn���p
	int pos_Y;//player�ɓn���p


public:
	Stage1();
	~Stage1();

	void Init();
	void Update();
	void Draw();
	void Finish();

	Player* player;

	Stage1* stage1;
	Stage1_1 stage1_1;
	Stage1_2 stage1_2;
	Stage1_3 stage1_3;
	
};

