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
	isCollider_Draw(false),
	isRoom2_Draw(false),isRoom3_Draw(false),
	isRoom4_Draw(false)
{
}

void Stage1_1::Init()
{
	ground_Block1 = LoadGraph("ground_Block_Sample.png");

	m_place = isCorrider;

}

void Stage1_1::Update()
{




}

int Stage1_1::camera_Stagger(int place)
{

	for (int w = 0;w < MAP_WIDTH;w++)
	{
		for (int h = 0;h < MAP_HEIGHT;h++)
		{
			//部屋の大きさ表す用の初期化
			Room_LeftUpX = 0;
			Room_LeftUpY = 0;
			Room_RightDownX = MAP_WIDTH * BLOCK_SIZE;
			Room_RightDownY = MAP_HEIGHT * BLOCK_SIZE;
			//廊下の大きさを表す
			if (Stage1_MapInfo_Layer1[h][w] == 1)
			{

				if (Room_LeftUpX < w)
				{
					Room_LeftUpX = w * BLOCK_SIZE;
				}//最小値の代入X
				if (Room_LeftUpY < h)
				{
					Room_LeftUpY = h * BLOCK_SIZE;
				}//最小値の代入Y
				if (Room_RightDownX >= w)
				{
					Room_RightDownX = w * BLOCK_SIZE;
				}//最大値の代入X
				if (Room_RightDownY >= h)
				{
					Room_RightDownY = h * BLOCK_SIZE;
				}//最大値の代入Y

				//部屋に入ったか入ってないかを知らべる
				if (collision.Floor_Camera(
					Room_LeftUpX, Room_LeftUpY,
					Room_RightDownX, Room_RightDownY,
					player->GetPlayerPosX(),
					player->GetPlayerPosY()) == true)
				{
					m_place = isCorrider;
				}
			}

			//ルーム2の大きさを表す
			if (Stage1_MapInfo_Layer1[h][w] == 2)
			{

				if (Room_LeftUpX < w)
				{
					Room_LeftUpX = w * BLOCK_SIZE;
				}//最小値の代入X
				if (Room_LeftUpY < h)
				{
					Room_LeftUpY = h * BLOCK_SIZE;
				}//最小値の代入Y
				if (Room_RightDownX >= w)
				{
					Room_RightDownX = w * BLOCK_SIZE;
				}//最大値の代入X
				if (Room_RightDownY >= h)
				{
					Room_RightDownY = h * BLOCK_SIZE;
				}//最大値の代入Y

				//部屋に入ったか入ってないかを知らべる
				if (collision.Floor_Camera(
					Room_LeftUpX, Room_LeftUpY,
					Room_RightDownX, Room_RightDownY,
					player->GetPlayerPosX(),
					player->GetPlayerPosY()) == true)
				{
					m_place = isRoom2;
				}
			}


			//ルーム3の大きさを表す
			if (Stage1_MapInfo_Layer1[h][w] == 3)
			{
				if (Room_LeftUpX < w)
				{
					Room_LeftUpX = w * BLOCK_SIZE;
				}//最小値の代入X
				if (Room_LeftUpY < h)
				{
					Room_LeftUpY = h * BLOCK_SIZE;
				}//最小値の代入Y
				if (Room_RightDownX >= w)
				{
					Room_RightDownX = w * BLOCK_SIZE;
				}//最大値の代入X
				if (Room_RightDownY >= h)
				{
					Room_RightDownY = h * BLOCK_SIZE;
				}//最大値の代入Y

				//部屋に入ったか入ってないかを知らべる
				if (collision.Floor_Camera(
					Room_LeftUpX, Room_LeftUpY,
					Room_RightDownX, Room_RightDownY,
					player->GetPlayerPosX(),
					player->GetPlayerPosY()) == true)
				{
					m_place = isRoom3;

				}
			}

			//ルーム3の大きさを表す
			if (Stage1_MapInfo_Layer1[h][w] == 4)
			{
				if (Room_LeftUpX < w)
				{
					Room_LeftUpX = w * BLOCK_SIZE;
				}//最小値の代入X
				if (Room_LeftUpY < h)
				{
					Room_LeftUpY = h * BLOCK_SIZE;
				}//最小値の代入Y
				if (Room_RightDownX >= w)
				{
					Room_RightDownX = w * BLOCK_SIZE;
				}//最大値の代入X
				if (Room_RightDownY >= h)
				{
					Room_RightDownY = h * BLOCK_SIZE;
				}//最大値の代入Y

				//部屋に入ったか入ってないかを知らべる
				if (collision.Floor_Camera(
					Room_LeftUpX, Room_LeftUpY,
					Room_RightDownX, Room_RightDownY,
					player->GetPlayerPosX(),
					player->GetPlayerPosY()) == true)
				{
					m_place = isRoom4;

				}
			}

			switch (m_place)
			{
			case Stage1_1::isCorrider:
				isCollider_Draw = true;
				break;
			case Stage1_1::isRoom2:
				isRoom2_Draw = true;
				break;
			case Stage1_1::isRoom3:
				isRoom3_Draw = true;
				break;
			case Stage1_1::isRoom4:
				isRoom4_Draw = true;
				break;
			}


		}
	}

	//placeにm_placeを代入
	//複数回代入することが気持ち悪かったからまとめちゃった
	place = m_place;
	return place;


}


void Stage1_1::Draw()
{

	for (int w = 0;w < MAP_WIDTH;w++)
	{
		for (int h = 0;h < MAP_HEIGHT;h++)
		{
			//下にレイヤー1のマップチップ描画を入れる
			if (Stage1_MapInfo_Layer1[h][w] == 1 && isCollider_Draw == true)
			{

				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block1, TRUE );
			}
			if (Stage1_MapInfo_Layer1[h][w] == 2 && isRoom2_Draw == true)
			{
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 3 && isRoom3_Draw == true)
			{
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block1, TRUE);
			}
			if (Stage1_MapInfo_Layer1[h][w] == 4 && isRoom4_Draw == true)
			{
				DrawGraph(w*BLOCK_SIZE,
					h*BLOCK_SIZE, ground_Block1, TRUE);
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
