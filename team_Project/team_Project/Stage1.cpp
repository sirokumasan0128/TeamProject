#include "Stage1.h"
#include<DxLib.h>

Stage1::Stage1()
	:player(new Player()),
	camera_StaggerX(0),
	camera_StaggerY(0),place(isRoom2)
{
	//初期値入力
	pos_X = 300;
	pos_Y = 420;
	player->Init(pos_X, pos_Y);

	stage1_1.Init();
	stage1_2.Init();
	stage1_3.Init();

	//stage1_1にプレイヤーの値が渡る
	stage1_1.setPlayer(player);
	//stage1_2にプレイヤーの値が渡る
	stage1_2.setPlayer(player);
}

void Stage1::Init()
{

}

void Stage1::Update()
{
	player->Update();


	stage1_1.Update();
	stage1_2.Update();
	stage1_3.Update();
	//DrawFormatString(500, 15, GetColor(255, 255, 255), "%d Update内のplace", place);

}

void Stage1::Draw()
{
	stage1_1.Draw();
	stage1_1.camera_Stagger(place);
	switch (place)
	{
	case Stage1::isCorridor:
		camera_StaggerX = 0;
		camera_StaggerY = 0;
		break;
	case Stage1::isRoom2:
		camera_StaggerX = 650;
		camera_StaggerY = 400;
		break;
	case Stage1::isRoom3:
		camera_StaggerX = 500;
		camera_StaggerY = -500;
		break;
	case Stage1::isRoom4:
		camera_StaggerX = -500;
		camera_StaggerY = 500;
		break;
	}

	DrawFormatString(500, 30, GetColor(255, 255, 255), "%d Stage1のDraw内のplace", place);

	stage1_2.Draw(this->camera_StaggerX, this->camera_StaggerY);
	//stage1_2.Draw();
	player->Draw();
	stage1_3.Draw();
}

void Stage1::Finish()
{

}

Stage1::~Stage1()
{
	delete(player);
}
