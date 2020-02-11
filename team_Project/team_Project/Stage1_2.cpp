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
			//vector<int> Block_Position = { w*BLOCK_SIZE,h*BLOCK_SIZE };

			if (Stage1_MapInfo_Layer2[h][w] == 102)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE-camera_StaggerX, 
					h*BLOCK_SIZE-camera_StaggerY, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 103)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE-camera_StaggerX, 
					h*BLOCK_SIZE-camera_StaggerY, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 104)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE - camera_StaggerX,
					h*BLOCK_SIZE - camera_StaggerY, ground_Block2, TRUE);
			}
			if (Stage1_MapInfo_Layer2[h][w] == 109)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE - camera_StaggerX, 
					h*BLOCK_SIZE - camera_StaggerY, ground_Block2, TRUE);
			}
		}
	}
	player.Draw();
	DrawFormatString(500, 50, GetColor(255, 255, 255), "camera_Stagger %d\ncamera_Stagger %d", camera_StaggerX, camera_StaggerY);

}

void Stage1_2::Stage1_2_Map_Hit()
{
	//�����œ�d�Ăяo���ɂȂ��Ă����
	//player.Update();

	camera_StaggerX = 1000;
	camera_StaggerY = 1000;

	//�l�������Ă���Ă邩�m�F�p
	DrawFormatString(500, 0, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());


	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			//���[��1�̑傫����\��
			if (Stage1_MapInfo_Layer2[h][w] == 109)
			{
				MiniX = w;//����1�̍���̍��WX()
				MiniY = h;//����1�̍���̍��WY
				MaxX = w;//������1�̉E���̍��WX
				MaxY = h;//����1�̉E���̍��WY
				if (MiniX > w)
				{ MiniX = w*32;}//�ŏ��l�̑��X
				if (MiniY > h)
				{ MiniY = h*32;}//�ŏ��l�̑��Y
				if (MaxX < w)
				{ MaxX = w*32;}//�ő�l�̑��X
				if (MaxY < h)
				{ MaxY = h*32;}//�ő�l�̑��Y

				//�����ɓ������������ĂȂ�����m��ׂ�
				if (collision.Floor_Camera(
					MiniX, MiniY, MaxX, MaxY,
					player.GetPlayerPosX(),
					player.GetPlayerPosY()) == true)
				{
					camera_StaggerX = (MaxX - MiniX) / 2;//����1��Width�̔����̃T�C�Y
					camera_StaggerY = (MaxY - MiniY) / 2;//����1��Height�̔����̃T�C�Y
				}
			}

			if (collision.Block_Collision_Up(
				w*BLOCK_SIZE, h*BLOCK_SIZE,
				player.GetPlayerPosX(),
				player.GetPlayerPosY()) == true &&
				Stage1_MapInfo_Layer2[h][w] != 100)
			{

				player.SetPlayerPosY(h*BLOCK_SIZE-64);

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