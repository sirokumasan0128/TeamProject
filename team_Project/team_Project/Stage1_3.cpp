#include<DxLib.h>
#include"Stage1_3.h"

void Stage1_3::Stage1_3_Map_Draw()
{
	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�(���C���[3)
	ground_Block3 = LoadGraph("ground_Block_Sample3.png");

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 003)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE, h*BLOCK_SIZE, ground_Block3, TRUE);
			}
		}
	}

}