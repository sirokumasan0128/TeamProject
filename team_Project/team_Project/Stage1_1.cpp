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

			Room_LeftUpX = 0;
			Room_LeftUpY = 0;
			Room_RightDownX = MAP_WIDTH * BLOCK_SIZE;
			Room_RightDownY = MAP_HEIGHT * BLOCK_SIZE;

			//�L���̑傫����\��
			if (Stage1_MapInfo_Layer1[h][w] == 1)
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
					place = isCorridor;

				}
			}

			//���[��2�̑傫����\��
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

				}
			}


			switch (place)
			{
			case Stage1_1::isCorridor:
				camera_StaggerX = 0;
				camera_StaggerY = 0;
				break;
			case Stage1_1::isRoom2:
				camera_StaggerX = 500;
				camera_StaggerY = 500;
				break;
			}

			//���Ƀ��C���[1�̃}�b�v�`�b�v�`�������
			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{

				DrawGraph(w*BLOCK_SIZE + camera_StaggerX,
					h*BLOCK_SIZE + camera_StaggerY, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{
				DrawGraph(w*BLOCK_SIZE + camera_StaggerX,
					h*BLOCK_SIZE + camera_StaggerY, ground_Block1, TRUE);
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
