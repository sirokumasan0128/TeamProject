#include "Stage1.h"
#include<DxLib.h>

Stage1::Stage1()
	:player(new Player()),
	camera_StaggerX(0),
	camera_StaggerY(0),place(isCorridor)
{
	//�����l����
	pos_X = 300;
	pos_Y = 420;
	player->Init(pos_X, pos_Y);

	stage1_1.Init();
	stage1_2.Init();
	stage1_3.Init();

	//stage1_1�Ƀv���C���[�̒l���n��
	stage1_1.setPlayer(player);
	//stage1_2�Ƀv���C���[�̒l���n��
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

}

void Stage1::Draw()
{
	stage1_1.Draw();
	//�`�悸�炵�p��Switch case
	switch (stage1_1.camera_Stagger(place))
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


	stage1_2.Draw(this->camera_StaggerX, this->camera_StaggerY);
	player->Draw(this->camera_StaggerX, this->camera_StaggerY);
	stage1_3.Draw(this->camera_StaggerX, this->camera_StaggerY);
}

void Stage1::Finish()
{

}

Stage1::~Stage1()
{
	delete(player);
}
