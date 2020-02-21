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

	int pos_X;//playerに渡す用
	int pos_Y;//playerに渡す用


public:
	Stage1();
	~Stage1();

	void Init();
	void Update();
	void Draw();
	void Finish();

	enum Place {
		isCorridor,
		isRoom2,
		isRoom3,
		isRoom4,
	};

	 
	
	Place place;
	Place e_place;

	int camera_StaggerX;//ステージずらす用X
	int camera_StaggerY;//ステージずらす用Y

	Player* player;

	Stage1* stage1;
	Stage1_1 stage1_1;
	Stage1_2 stage1_2;
	Stage1_3 stage1_3;
	
};

