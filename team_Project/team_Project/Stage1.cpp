#include <DxLib.h>
#include"Base_Scene.h"
#include "Stage1.h"

Stage1::Stage1()
{
	player.Init();
}

void Stage1::Init()
{

}

void Stage1::Update()
{
	player.Update();
	stage1_1.Update();
	stage1_2.Update();
	stage1_3.Update();
}


void Stage1::Draw()
{

	stage1_1.Draw();
	stage1_2.Draw();
	player.Draw();
	stage1_3.Draw();

}

void Stage1::Finish()
{

}

Stage1::~Stage1()
{

}
