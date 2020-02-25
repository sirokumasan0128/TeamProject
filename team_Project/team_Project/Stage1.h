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

	//�����`��p�t���O
	bool isCollider_Draw;
	bool isRoom2_Draw;
	bool isRoom3_Draw;
	bool isRoom4_Draw;


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
	 
	int camera_StaggerX;//�X�e�[�W���炷�pX
	int camera_StaggerY;//�X�e�[�W���炷�pY


	Player* player;


	Stage1* stage1;
	Stage1_1 stage1_1;
	Stage1_2 stage1_2;
	Stage1_3 stage1_3;
	
};

