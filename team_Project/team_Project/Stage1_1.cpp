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
	//player.Update();
}

void Stage1_1::Draw()
{
	//ステージ1のテクスチャ用の変数(レイヤー1)

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			camera_StaggerX = 0;
			camera_StaggerY = 0;

			//ルーム1の大きさを表す
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				MiniX = 0;//部屋1の左上の座標X()
				MiniY = 0;//部屋1の左上の座標Y
				MaxX = 0;//ル部屋1の右下の座標X
				MaxY = 0;//部屋1の右下の座標Y
				if (MiniX < w)
				{
					MiniX = w * 32;
				}//最小値の代入X
				else if (MiniY < h)
				{
					MiniY = h * 32;
				}//最小値の代入Y
				else if (MaxX > w)
				{
					MaxX = w * 32;
				}//最大値の代入X
				else if (MaxY > h)
				{
					MaxY = h * 32;
				}//最大値の代入Y

				   //部屋に入ったか入ってないかを知らべる
				if (collision.Floor_Camera(
					MiniX, MiniY, MaxX, MaxY,
					player.GetPlayerPosX(),
					player.GetPlayerPosY()) == true)
				{
					camera_StaggerX = (MaxX - MiniX) / 2;//部屋1のWidthの半分のサイズ
					camera_StaggerY = (MaxY - MiniY) / 2;//部屋1のHeightの半分のサイズ
				}
				DrawFormatString(500, 100, GetColor(255, 255, 255), "camera_Stagger %d\ncamera_Stagger %d", camera_StaggerX, camera_StaggerY);
				DrawFormatString(500, 150, GetColor(255, 255, 255), "MiniX %d\nMiniY %d", MiniX, MiniY);
				DrawFormatString(500, 200, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());

			}

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