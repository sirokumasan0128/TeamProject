#include<DxLib.h>
#include "Stage1_3.h"



Stage1_3::Stage1_3()
	 : stage1_3_Camera_StaggerX(0), stage1_3_Camera_StaggerY(0),
	ground_Tex3(0)

{
	ground_Tex3 = LoadGraph("ground_Block_Sample4.png");

}

void Stage1_3::Init()
{

}

void Stage1_3::Update()
{

}

void Stage1_3::Draw(int camera_StaggerX, int camera_StaggerY)
{

	//�`�悸�炵�p�̒l�󂯎��
	stage1_3_Camera_StaggerX = camera_StaggerX;
	stage1_3_Camera_StaggerY = camera_StaggerY;


	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			if (Stage1_MapInfo_Layer3[h][w] == 201)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE + stage1_3_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_3_Camera_StaggerY, ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 202)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE + stage1_3_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_3_Camera_StaggerY, ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 203)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE + stage1_3_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_3_Camera_StaggerY, ground_Tex3, TRUE);
			}
			if (Stage1_MapInfo_Layer3[h][w] == 204)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(w*BLOCK_SIZE + stage1_3_Camera_StaggerX,
					h*BLOCK_SIZE + stage1_3_Camera_StaggerY, ground_Tex3, TRUE);
			}
		}
	}

}

void Stage1_3::Finish()
{

}



Stage1_3::~Stage1_3()
{
}
