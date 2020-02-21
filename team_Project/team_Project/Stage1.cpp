#include "Stage1.h"


Stage1::Stage1()
	:player(new Player())
{
	//初期値入力
	pos_X = 300;
	pos_Y = 420 ;
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

}

void Stage1::Draw()
{
	stage1_1.Draw();
	stage1_2.Draw();
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
