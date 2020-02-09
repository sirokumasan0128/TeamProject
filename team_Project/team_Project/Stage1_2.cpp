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
	player.Init();

}

void Stage1_2::Update()
{

}

void Stage1_2::Draw()
{


	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };


			if (Stage1_MapInfo_Layer2[h][w] == 002)
			{
				//下にレイヤー1のマップチップの描画用を入れる
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block2, TRUE);
			}
		}
	}
	player.Draw();

}


void Stage1_2::Stage1_2_Map_Hit()
{
	//ここで二重呼び出しになっている説
	//player.Update();
	//ここのupdataを切るとこっちのクラスで値を取得できない


	//値を持ってこれてるか確認用
	DrawFormatString(400, 400, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());

	
	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };

<<<<<<< HEAD

			//緑のブロックとの当たり判定
			//ここでブロックの上とプレイヤーの当たり判定を見てる

			if (Stage1_MapInfo_Layer2[h][w] == 002)
=======
			//値を持ってこれてるか確認用
			DrawFormatString(400, 400, GetColor(255, 255, 255), "%d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());
			//緑のブロックとの当たり判定
			//ここでブロックの上とプレイヤーの当たり判定を見てる
			if (collision.Block_Collision_Right(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)
>>>>>>> d31d92ccce024bf4d77cf27dcf4cd576f4d9484f
			{
				if (collision.Block_Collision(
					w*BLOCK_SIZE, h*BLOCK_SIZE,
					player.GetPlayerPosX(),
					player.GetPlayerPosY()) == true)
				{

					player.SetPlayerVelocityY(0);

					player.SetPlayerPosX(500);
					player.SetPlayerPosY(500);

<<<<<<< HEAD
					//player.SetPlayerVelocityX(0);

					//DrawFormatString(600, 400, GetColor(255, 255, 255), "%d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());
					DrawFormatString(600, 460, GetColor(255, 255, 255), "%d\n%d", w*BLOCK_SIZE, h*BLOCK_SIZE);
				}
=======
				player.SetPlayerVelocityY(0);

>>>>>>> d31d92ccce024bf4d77cf27dcf4cd576f4d9484f
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