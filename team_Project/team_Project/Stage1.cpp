#include <DxLib.h>
#include "Stage1.h"

Stage1::Stage1()
{
	player.Init();
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

Stage1::~Stage1()
{

}
