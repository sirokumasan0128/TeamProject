#include<DxLib.h>
#include<vector>
#include "Stage1_2.h"

using namespace std;

Stage1_2::Stage1_2()
{
}

void Stage1_2::Init()
{
	ground_tex2 = LoadGraph("ground_Block_Sample2.png");

}

void Stage1_2::Update()
{
	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{

			//if (collision.Block_Collision_Up(
			//	w*BLOCK_SIZE, h*BLOCK_SIZE,
			//	player.GetPlayerPosX(),
			//	player.GetPlayerPosY()) == true &&
			//	Stage1_MapInfo_Layer2[h][w] != 100)
			//{

			//	//�������Ń|�C���^�̌݊����������Ȃ��Ȃ����̂Ń|�C���^�g���̎~�߂܂���
			//	player.SetPlayerPosY(h * BLOCK_SIZE - 64);

			//	//DrawFormatString(0, 450, GetColor(255, 255, 255), "%d", player.GetPlayerVelocityY());

			//	//DrawFormatString(0, 60, GetColor(255, 255, 255), "%d\n%d", w*BLOCK_SIZE, h*BLOCK_SIZE);
			//}
			//if (collision.Block_Collision_Bottom(w*BLOCK_SIZE, h*BLOCK_SIZE,
			//	player.GetPlayerPosX(),
			//	player.GetPlayerPosY()) == true &&
			//	Stage1_MapInfo_Layer2[h][w] != 100)
			//{

			//	player.SetPlayerPosY(h*BLOCK_SIZE);

			//}

			//if (collision.Block_Collision_Right(w*BLOCK_SIZE, h*BLOCK_SIZE,
			//	player.GetPlayerPosX(),
			//	player.GetPlayerPosY()) == true &&
			//	Stage1_MapInfo_Layer2[h][w] != 100)
			//{

			//	player.SetPlayerPosX(w*BLOCK_SIZE + 32);
			//}

			//if (collision.Block_Collision_Left(w*BLOCK_SIZE, h*BLOCK_SIZE,
			//	player.GetPlayerPosX(),
			//	player.GetPlayerPosY()) == true &&
			//	Stage1_MapInfo_Layer2[h][w] != 100)
			//{

			//	player.SetPlayerPosX(w*BLOCK_SIZE - 32);

			//}

		}
	}

}

void Stage1_2::Stage1_Map_Hit()
{

}

void Stage1_2::Draw()
{
	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };

			if (Stage1_MapInfo_Layer2[h][w] == 102)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 103)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 104)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_tex2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 109)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_tex2, TRUE);
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
