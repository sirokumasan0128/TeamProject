#include<DxLib.h>
#include"Stage1_1.h"

void Stage1_1::Stage1_1_Map_Draw()
{
	//�X�e�[�W1�̃e�N�X�`���p�̕ϐ�(���C���[1)
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer1[h][w] == 001)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE,h*BLOCK_SIZE,ground_Block1,TRUE);
			}
		}
	}

}