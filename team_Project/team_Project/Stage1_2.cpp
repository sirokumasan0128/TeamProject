#include<DxLib.h>
#include<iostream>
#include<vector>
#include"Stage1_2.h"
#include"Player.h"
#include"Collision.h"

using namespace std;

void Stage1_2::Stage1_2_Map_Draw()
{

	Player player;
	Collision collision;

	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�(���C���[3)
	ground_Block2 = LoadGraph("ground_Block_Sample2.png");

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };


			if (Stage1_MapInfo_Layer2[h][w] == 002)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block2, TRUE);
			}
		}
	}

}

void Stage1_2::Stage1_2_Map_Hit()
{
	Player player;
	Collision collision;
	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };

			DrawFormatString(400,400,GetColor(255,255,255),"%d\n%d",player.GetPlayerPosX(),player.GetPlayerPosY());
			if (collision.Block_Collision(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true)
			{

				player.SetPlayerVelocityY(0);
			}


		}
	}


}