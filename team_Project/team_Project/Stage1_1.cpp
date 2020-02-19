#include<DxLib.h>
#include<iostream>
#include "Stage1_1.h"

using namespace std;

Stage1_1::Stage1_1()
	:ground_Block1(0),
	camera_StaggerX(0),camera_StaggerY(0),
	MiniX(0),MiniY(0),MaxX(0),MaxY(0)
{
	//ground_Block1 = LoadGraph("ground_Block_Sample.png");
}

void Stage1_1::Init()
{
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

}

void Stage1_1::Update()
{

}

void Stage1_1::Draw()
{
	for (int w = 0;w < MAP_WIDTH;w++)
	{
		for (int h = 0;h < MAP_HEIGHT;h++)
		{

			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + camera_StaggerX,
					h*BLOCK_SIZE + camera_StaggerY, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + camera_StaggerX,
					h*BLOCK_SIZE + camera_StaggerY, ground_Block1, TRUE);
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
