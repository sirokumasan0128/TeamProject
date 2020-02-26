#include "Stage1.h"
#include<DxLib.h>

Stage1::Stage1()
	:player(new Player()),
	enemy_1(new Enemy_1()),
	camera_StaggerX(0),
	camera_StaggerY(0), place(isCorridor),
	isCollider_Draw(false),isRoom2_Draw(false),
	isRoom3_Draw(false),isRoom4_Draw(false)
{	
	//初期値入力
	pos_X = 300;
	pos_Y = 420;
	player->Init(pos_X, pos_Y);

	enemy_Number;
	enemy_1->Init(enemy_Number);

	stage1_1.Init();
	stage1_2.Init();
	stage1_3.Init();

	//stage1_1にプレイヤーの値を渡す
	stage1_1.setPlayer(player);
	//stage1_2にプレイヤーの値を渡す
	stage1_2.setPlayer(player);

	//stage1_3にエネミーの値を渡す
	//stage1_3.

}

void Stage1::Init()
{

}

void Stage1::Update()
{
	player->Update();
	enemy_1->Update();

	stage1_1.Update();
	stage1_2.Update();
	stage1_3.Update();

}

void Stage1::Draw()
{
	stage1_1.Draw();

	//描画ずらし用のSwitch case
	switch (stage1_1.camera_Stagger(place))
	{
	case Stage1::isCorridor:
		isCollider_Draw = true;
		break;
	case Stage1::isRoom2:
		isRoom2_Draw = true;
		break;
	case Stage1::isRoom3:
		isRoom3_Draw = true;
		break;
	case Stage1::isRoom4:
		isRoom4_Draw = true;
		break;
	}


	stage1_2.Draw(this->isCollider_Draw,this->isRoom2_Draw,
		this->isRoom3_Draw,this->isRoom4_Draw);
	player->Draw();
	enemy_1->Draw();
	stage1_3.Draw(this->isCollider_Draw, this->isRoom2_Draw,
		this->isRoom3_Draw, this->isRoom4_Draw);
}

void Stage1::Finish()
{

}

Stage1::~Stage1()
{
	delete(player);
	delete(enemy_1);
}
