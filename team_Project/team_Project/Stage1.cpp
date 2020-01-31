#include<DxLib.h>
#include"Stage1.h"
#include"Player.h"

void Stage1::Stage1_MapDate()
{
	Player player;

	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer1[h][w] == 001)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
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
				//���Ƀ��C���[2�̃}�b�v�`�b�v�̕`��p������
			}
		}
	}

	for (int h = 0; h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 1)
			{
				//���Ƀ��C���[2�p�̃}�b�v�`�b�v�̕`�������
			}
		}
	}

}