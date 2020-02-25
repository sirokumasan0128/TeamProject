#include<DxLib.h>
#include "Stage1_3.h"



Stage1_3::Stage1_3()
	 : stage1_3_Camera_StaggerX(0), stage1_3_Camera_StaggerY(0), 
	ground_Tex3(0)
{
	ground_Tex3 = LoadGraph("ground_Block_Sample4.png");

}

void Stage1_3::Init()
{

}

void Stage1_3::Update()
{

}

void Stage1_3::Draw(bool isCollider_Draw, bool isRoom2_Draw,
	bool isRoom3_Draw, bool isRoom4_Draw)
{

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 201 && isCollider_Draw == true)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE ,
					h*BLOCK_SIZE , ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 202 && isRoom2_Draw == true)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE ,
					h*BLOCK_SIZE , ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 203 && isRoom3_Draw == true)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE ,
					h*BLOCK_SIZE , ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 204 && isRoom4_Draw == true)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE ,
					h*BLOCK_SIZE , ground_Tex3, TRUE);
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
