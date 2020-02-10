#include<DxLib.h>
#include<iostream>
#include"Collision.h"

using namespace std;

bool Collision::Block_Collision_Up(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//�u���b�N�̏�Ƃ̓����蔻��
	/*if (Player_PosX >= Block_PosX &&
		Player_PosX <= Block_PosX + 32 &&
		Player_PosY <= Block_PosY &&
		Player_PosY >= Block_PosY - 32)
	{
		return true;
	}*/


	int vectlX, vectlY;


	if (std::abs(Player_PosX - Block_PosX) < 32 / 2 + 32 / 2 &&
		std::abs(Player_PosY - Block_PosY) < 32 / 2 + 32 / 2)
	{
		vectlX = Player_PosX - Block_PosX;
		vectlY = Player_PosY - Block_PosY;

		if (std::abs(vectlX) < std::abs(vectlY))
		{
			if (vectlY < 0)
			{
				//�ォ��̓����蔻��
				return true;
			}
		}

	}

}
bool Collision::Block_Collision_Left(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//�u���b�N�̍��Ƃ̓����蔻��
	/*if (Player_PosX <= Block_PosX &&
		Player_PosX >= Block_PosX - 32 &&
		Player_PosY >= Block_PosY &&
		Player_PosY <= Block_PosY + 32)
	{
		return true;
	}*/


	int vectlx, vectly;

	if (std::abs(Player_PosX - Block_PosX) < 32 / 2 + 32 / 2 &&
		std::abs(Player_PosY  - Block_PosY) < 32 / 2 + 32 / 2)
	{
		vectlx = Player_PosX - Block_PosX;
		vectly = Player_PosY - Block_PosY;
				

		if (std::abs(vectlx) < std::abs(vectly))//�ォ��̓����蔻��
		{
			
		}
		else
		{
			if (vectlx > 0)
			{
				
			}
			else
			{
				return true;
			}
		}

	}


}
bool Collision::Block_Collision_Right(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//�u���b�N�E�Ƃ̓����蔻��
	/*if (Player_PosX >= Block_PosX + 32 &&
		Player_PosX <= Block_PosX &&
		Player_PosY >= Block_PosY -32 &&
		Player_PosY <= Block_PosY )
	{
		return true;
	}*/

	int vectlx, vectly;

	if (std::abs(Player_PosX - Block_PosX) < 32 / 2 + 32 / 2 &&
		std::abs(Player_PosY - Block_PosY) < 32 / 2 + 32 / 2)
	{
		vectlx = Player_PosX - Block_PosX;
		vectly = Player_PosY - Block_PosY;


		if (std::abs(vectlx) < std::abs(vectly))//�ォ��̓����蔻��
		{

		}
		else
		{
			if (vectlx > 0)
			{
				return true;
			}
			else
			{
				
			}
		}

	}



}


bool Collision::Block_Collision_Bottom(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//�u���b�N�̏�Ƃ̓����蔻��
	/*if (Player_PosX >= Block_PosX &&
		Player_PosX <= Block_PosX + 32 &&
		Player_PosY <= Block_PosY &&
		Player_PosY >= Block_PosY - 32)
	{
		return true;
	}*/

	int vectlX, vectlY;


	if (std::abs(Player_PosX - Block_PosX) < 32 / 2 + 32 / 2 &&
		std::abs(Player_PosY - Block_PosY) < 32 / 2 + 32 / 2)
	{
		vectlX = Player_PosX - Block_PosX;
		vectlY = Player_PosY - Block_PosY;

		if (std::abs(vectlX) < std::abs(vectlY))
		{
			if (vectlY < 0)
			{
				
			}
			else
			{
				
				return true;
			}
		}

	}



}

//bool Collision::Item_Collision()
//{
//
//}