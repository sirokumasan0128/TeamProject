#include<DxLib.h>
#include"Stage1.h"
#include"Player.h"

void Stage1::Stage1_MapDate()
{
	Player player;

	//ステージ1のテクスチャ用の変数
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer1[h][w] == 001)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block1, TRUE);
			}
		}
	}

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer2[h][w] == 1)
			{
				//下にレイヤー2のマップチップの描画用を入れる
			}
		}
	}

	for (int h = 0; h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 1)
			{
				//下にレイヤー2用のマップチップの描画を入れる
			}
		}
	}

}