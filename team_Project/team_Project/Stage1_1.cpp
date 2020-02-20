#include<DxLib.h>
#include<iostream>
#include "Stage1_1.h"

using namespace std;

Stage1_1::Stage1_1()
	:ground_Block1(0),
	camera_StaggerX(0), camera_StaggerY(0),
	Room_LeftUpX(0), Room_LeftUpY(0),
	Room_RightDownX(MAP_WIDTH*BLOCK_SIZE),
	Room_RightDownY(MAP_HEIGHT*BLOCK_SIZE),
	block_Draw_PositionX(0), block_Draw_PositionY(0)
{
	//ground_Block1 = LoadGraph("ground_Block_Sample.png");
}

void Stage1_1::Init()
{
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

	place = isCorridor;

}

void Stage1_1::Update()
{
	for (int h = 0;h < MAP_HEIGHT;h++)
	{
		for (int w = 0;w < MAP_WIDTH;w++)
		{
			//
		}
	}


	DrawFormatString(500, 0, GetColor(255, 255, 255), "%d �v���C���[�̃|�W�V����X", player->GetPlayerPosX());
	DrawFormatString(500, 15, GetColor(255, 255, 255), "%d �v���C���[�̃|�W�V����Y", player->GetPlayerPosY());

	DrawFormatString(500, 30, GetColor(255, 255, 255), "%d ����̍��WX", Room_LeftUpX);
	DrawFormatString(500, 45, GetColor(255, 255, 255), "%d ����̍��WY", Room_LeftUpY);

	DrawFormatString(500, 60, GetColor(255, 255, 255), "%d �E���̍��WX", Room_RightDownX);
	DrawFormatString(500, 75, GetColor(255, 255, 255), "%d �E���̍��WY", Room_RightDownY);

	DrawFormatString(500, 90, GetColor(255, 255, 255), "%d �J�������炵X", camera_StaggerX);
	DrawFormatString(500, 105, GetColor(255, 255, 255), "%d �J�������炵Y", camera_StaggerY);


}
void Stage1_1::Draw()
{
	for (int w = 0;w < MAP_WIDTH;w++)
	{
		for (int h = 0;h < MAP_HEIGHT;h++)
		{
			//���[��1�̑傫����\��
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				if (Room_LeftUpX < w)
				{
					Room_LeftUpX = w * BLOCK_SIZE;
				}//�ŏ��l�̑��X
				if (Room_LeftUpY < h)
				{
					Room_LeftUpY = h * BLOCK_SIZE;
				}//�ŏ��l�̑��Y
				if (Room_RightDownX >= w)
				{
					Room_RightDownX = w * BLOCK_SIZE;
				}//�ő�l�̑��X
				if (Room_RightDownY >= h)
				{
					Room_RightDownY = h * BLOCK_SIZE;
				}//�ő�l�̑��Y

				//�����ɓ������������ĂȂ�����m��ׂ�
				if (collision.Floor_Camera(
					Room_LeftUpX, Room_LeftUpY,
					Room_RightDownX, Room_RightDownY,
					player->GetPlayerPosX(),
					player->GetPlayerPosY()) == true)
				{
					place = isRoom2;
					//camera_StaggerX = SCREEN_WIDtH / 2 - (Room_RightDownX - Room_LeftUpX) / 2 / 2;//����2��Width�̔����̃T�C�Y
					//camera_StaggerY = SCREEN_HEIGHT / 2 - (Room_RightDownY - Room_LeftUpY) / 2 / 2;//����2��Height�̔����̃T�C�Y

				}
			}

			switch (place)
			{
			case Stage1_1::isCorridor:
				block_Draw_PositionX = w * BLOCK_SIZE;
				block_Draw_PositionY = h * BLOCK_SIZE;

				break;
			case Stage1_1::isRoom2:
				block_Draw_PositionX = SCREEN_WIDtH / 2 - (Room_RightDownX - Room_LeftUpX) / 2 / 2;//����2��Width�̔����̃T�C�Y
				block_Draw_PositionY = SCREEN_HEIGHT / 2 - (Room_RightDownY - Room_LeftUpY) / 2 / 2;//����2��Height�̔����̃T�C�Y
				break;
			default:
				break;
			}



			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(block_Draw_PositionX,
					block_Draw_PositionY, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				//���Ƀ��C���[1�̃}�b�v�`�b�v�̕`��p������
				DrawGraph(block_Draw_PositionX,
					block_Draw_PositionY, ground_Block1, TRUE);
			}

		}
	}
}

void Stage1_1::Finish()
{
}

void Stage1_1::setPlayer(Player * p_1)
{
	player = p_1;
}


Stage1_1::~Stage1_1()
{
}
