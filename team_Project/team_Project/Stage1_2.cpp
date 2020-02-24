#include<DxLib.h>
#include<vector>
#include "Stage1_2.h"

using namespace std;

Stage1_2::Stage1_2()
	:stage1_2_Camera_StaggerX(0),stage1_2_Camera_StaggerY(0),
	ground_Tex2(0)
{
}

void Stage1_2::Init()
{
	ground_Tex2 = LoadGraph("ground_Block_Sample2.png");

}

void Stage1_2::Update()
{
	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{

			//プレイヤーと壁の当たり判定と位置補正
			if (collision.Block_Collision_Up(
				w*BLOCK_SIZE+stage1_2_Camera_StaggerX,
				h*BLOCK_SIZE+stage1_2_Camera_StaggerY,
				player->GetPlayerPosX(),
				player->GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{
				player->SetPlayerPosY(h * BLOCK_SIZE - 64);
			}
			if (collision.Block_Collision_Bottom(
				w*BLOCK_SIZE+stage1_2_Camera_StaggerX, 
				h*BLOCK_SIZE + stage1_2_Camera_StaggerY,
				player->GetPlayerPosX(),
				player->GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player->SetPlayerPosY(h*BLOCK_SIZE);

			}

			if (collision.Block_Collision_Right(
				w*BLOCK_SIZE + stage1_2_Camera_StaggerX,
				h*BLOCK_SIZE + stage1_2_Camera_StaggerY,
				player->GetPlayerPosX(),
				player->GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player->SetPlayerPosX(w*BLOCK_SIZE + 32);
			}

			if (collision.Block_Collision_Left(
				w*BLOCK_SIZE + stage1_2_Camera_StaggerX,
				h*BLOCK_SIZE + stage1_2_Camera_StaggerY,
				player->GetPlayerPosX(),
				player->GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player->SetPlayerPosX(w*BLOCK_SIZE - 32);

			}

		}
	}

}

void Stage1_2::Stage1_Map_Hit()
{

}

void Stage1_2::Draw(int camera_StaggerX,int camera_StaggerY)
{
	//描画ずらし用の値受け取り
	stage1_2_Camera_StaggerX = camera_StaggerX;
	stage1_2_Camera_StaggerY = camera_StaggerY;


	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };


			if (Stage1_MapInfo_Layer2[h][w] == 102)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + stage1_2_Camera_StaggerX ,
					h*BLOCK_SIZE + stage1_2_Camera_StaggerY, ground_Tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 103)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + stage1_2_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_2_Camera_StaggerY, ground_Tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 104)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + stage1_2_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_2_Camera_StaggerY, ground_Tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 109)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE + stage1_2_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_2_Camera_StaggerY, ground_Tex2, TRUE);
			}



		}
	}

}

void Stage1_2::Finish()
{

}

void Stage1_2::setPlayer(Player * p_2)
{
	player = p_2;
}


Stage1_2::~Stage1_2()
{
}
