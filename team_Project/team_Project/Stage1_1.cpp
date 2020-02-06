#include<DxLib.h>
#include<iostream>
#include"Base_Scene.h"
#include"Stage1_1.h"

using namespace std;

Stage1_1::Stage1_1()
{
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

}

void Stage1_1::Init()
{

}

void Stage1_1::Update()
{
	
}

void Stage1_1::Draw()
{
	//ステージ1のテクスチャ用の変数(レイヤー1)

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer1[h][w] == 001)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE,h*BLOCK_SIZE,ground_Block1,TRUE);
			}
		}
	}

}

void Stage1_1::Finish()
{

}


Stage1_1::~Stage1_1()
{

}