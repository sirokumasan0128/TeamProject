#include<DxLib.h>
#include"Stage1.h"
#include"Player.h"

void Stage1::Stage1_MapDate()
{
	Player player;

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
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
			if (Stage1_MapInfo_Layer2[h][w] == 1)
			{
				//���Ƀ��C���[2�p�̃}�b�v�`�b�v�̕`�������
			}
		}
	}

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 1)
			{
				//���Ƀ��C���[3�p�̃}�b�v�`�b�v�`�������
			}
		}
	}
}