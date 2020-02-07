#include<DxLib.h>
#include<iostream>
#include"Scene_Manager.h"
#include"Stage1_3.h"

using namespace std;

Stage1_3::Stage1_3()
{
	ground_Block3 = LoadGraph("ground_Block_Sample3.png");

}

void Stage1_3::Init()
{

}

void Stage1_3::Update()
{

}

void Stage1_3::Draw()
{

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 003)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block3, TRUE);
			}
		}
	}

}

void Stage1_3::Finish()
{

}

Stage1_3::~Stage1_3()
{

}