#include<DxLib.h>
#include<iostream>
#include"Scene_Manager.h"
#include<vector>
#include"Stage1_2.h"
//#include"Player.h"
//#include"Collision.h"


using namespace std;

Stage1_2::Stage1_2()
{
	//ステージ1のテクスチャ用の変数(レイヤー2)
	ground_Block2 = LoadGraph("ground_Block_Sample2.png");

}

void Stage1_2::Init()
{

}

void Stage1_2::Update()
{
}

void Stage1_2::Draw()
{
	//camera_StaggerX = 100;
	//camera_StaggerY = 100;
	//player.Update();

	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };

			if (Stage1_MapInfo_Layer2[h][w] == 102)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 103)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 104)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 109)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block2, TRUE);
			}
		}
	}
	player.Draw();

}

void Stage1_2::Stage1_2_Map_Hit()
{
	//ここで二重呼び出しになっている説
	player.Update();

	

	//値を持ってこれてるか確認用
	DrawFormatString(500, 0, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());


	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{

			if (collision.Block_Collision_Up(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				//↓ここでポインタの互換性が得られなくなったのでポインタ使うの止めました
				player.SetPlayerPosY(h * BLOCK_SIZE - 64);

				//DrawFormatString(0, 450, GetColor(255, 255, 255), "%d", player.GetPlayerVelocityY());

				//DrawFormatString(0, 60, GetColor(255, 255, 255), "%d\n%d", w*BLOCK_SIZE, h*BLOCK_SIZE);
			}
			if (collision.Block_Collision_Bottom(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player.SetPlayerPosY(h*BLOCK_SIZE);

			}

			if (collision.Block_Collision_Right(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player.SetPlayerPosX(w*BLOCK_SIZE + 32);
			}

			if (collision.Block_Collision_Left(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player.SetPlayerPosX(w*BLOCK_SIZE - 32);

			}

		}
	}


}

void Stage1_2::Finish()
{

}

Stage1_2::~Stage1_2()
{

}