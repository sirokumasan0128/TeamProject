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
	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�(���C���[2)
	ground_Block2 = LoadGraph("ground_Block_Sample2.png");

}

void Stage1_2::Init()
{
	player.Init();

}

void Stage1_2::Update()
{
	player.Update();
}

void Stage1_2::Draw()
{


	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };


			if (Stage1_MapInfo_Layer2[h][w] == 002)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block2, TRUE);
			}
		}
	}
	player.Draw();

}


void Stage1_2::Stage1_2_Map_Hit()
{
	//�����œ�d�Ăяo���ɂȂ��Ă����
	//player.Update();
	//������updata��؂�Ƃ������̃N���X�Œl���擾�ł��Ȃ�


	//�l�������Ă���Ă邩�m�F�p
	DrawFormatString(400, 400, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());


	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };



			//�΂̃u���b�N�Ƃ̓����蔻��
			//�����Ńu���b�N�̏�ƃv���C���[�̓����蔻������Ă�



			//�l�������Ă���Ă邩�m�F�p
			DrawFormatString(400, 400, GetColor(255, 255, 255), "%d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());



			//�΂̃u���b�N�Ƃ̓����蔻��
			//�����Ńu���b�N�̏�ƃv���C���[�̓����蔻������Ă�
			/*if (collision.Block_Collision_Right(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)

			{
				if (collision.Block_Collision_Up (
					w*BLOCK_SIZE, h*BLOCK_SIZE,
					player.GetPlayerPosX(),
					player.GetPlayerPosY()) == true)
				{

					player.SetPlayerVelocityY(0);

					player.SetPlayerPosX(500);
					player.SetPlayerPosY(500);


					//player.SetPlayerVelocityX(0);

					//DrawFormatString(600, 400, GetColor(255, 255, 255), "%d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());
					DrawFormatString(600, 460, GetColor(255, 255, 255), "%d\n%d", w*BLOCK_SIZE, h*BLOCK_SIZE);
				}




			}*/


			if (collision.Block_Collision_Up(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)
			{


				player.SetPlayerPosY(h*BLOCK_SIZE - 32);

				//player.SetPlayerVelocityY(0);
				DrawFormatString(500, 500, GetColor(255, 255, 255), "%d", player.GetPlayerVelocityY());



				//player.SetPlayerVelocityX(0);

				//DrawFormatString(600, 400, GetColor(255, 255, 255), "%d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());
				DrawFormatString(600, 460, GetColor(255, 255, 255), "%d\n%d", w*BLOCK_SIZE, h*BLOCK_SIZE);
			}


			if (collision.Block_Collision_Bottom(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)
			{

				//������
				player.SetPlayerPosY(h*BLOCK_SIZE + 32);
			}

			if (collision.Block_Collision_Right(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)
			{


				player.SetPlayerPosX(w*BLOCK_SIZE);
			}

			if (collision.Block_Collision_Left(w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 000)
			{


				player.SetPlayerPosX(w*BLOCK_SIZE - 32);
			}


			/*if (Stage1_MapInfo_Layer2[h][w] == 002 )
			{





			}*/


		}
	}


}

void Stage1_2::Finish()
{

}

Stage1_2::~Stage1_2()
{

}