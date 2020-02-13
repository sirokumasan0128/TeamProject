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
	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�(���C���[1)

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			camera_StaggerX = 0;
			camera_StaggerY = 0;

			//���[��1�̑傫����\��
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				MiniX = 0;//����1�̍���̍��WX()
				MiniY = 0;//����1�̍���̍��WY
				MaxX = 0;//������1�̉E���̍��WX
				MaxY = 0;//����1�̉E���̍��WY
				if (MiniX < w)
				{
					MiniX = w * 32;
				}//�ŏ��l�̑��X
				else if (MiniY < h)
				{
					MiniY = h * 32;
				}//�ŏ��l�̑��Y
				else if (MaxX > w)
				{
					MaxX = w * 32;
				}//�ő�l�̑��X
				else if (MaxY > h)
				{
					MaxY = h * 32;
				}//�ő�l�̑��Y

				   //�����ɓ������������ĂȂ�����m��ׂ�
				if (collision.Floor_Camera(
					MiniX, MiniY, MaxX, MaxY,
					player.GetPlayerPosX(),
					player.GetPlayerPosY()) == true)
				{
					camera_StaggerX = (MaxX - MiniX) / 2;//����1��Width�̔����̃T�C�Y
					camera_StaggerY = (MaxY - MiniY) / 2;//����1��Height�̔����̃T�C�Y
				}
				DrawFormatString(500, 100, GetColor(255, 255, 255), "camera_Stagger %d\ncamera_Stagger %d", camera_StaggerX, camera_StaggerY);
				DrawFormatString(500, 150, GetColor(255, 255, 255), "MiniX %d\nMiniY %d", MiniX, MiniY);
				DrawFormatString(500, 200, GetColor(255, 255, 255), "stageclass  %d\n%d", player.GetPlayerPosX(), player.GetPlayerPosY());

			}

			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE + camera_StaggerX,
					h*BLOCK_SIZE + camera_StaggerY, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
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