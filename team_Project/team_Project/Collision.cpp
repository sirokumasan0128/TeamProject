#include<DxLib.h>
#include<iostream>
#include"Collision.h"

using namespace std;

bool Collision::Block_Collision_Up(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//ブロックの上との当たり判定
	if (Player_PosX >= Block_PosX &&
		Player_PosX <= Block_PosX + 32 &&
		Player_PosY <= Block_PosY &&
		Player_PosY >= Block_PosY - 32)
	{
		return true;
	}


}
bool Collision::Block_Collision_Left(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//ブロックの左との当たり判定
	if (Player_PosX <= Block_PosX &&
		Player_PosX >= Block_PosX - 32 &&
		Player_PosY >= Block_PosY &&
		Player_PosY <= Block_PosY + 32)
	{
		return true;
	}

<<<<<<< HEAD
	/*int vectlx, vectly;

	if (std::abs(Player_PosX - Block_PosX) < 32 / 2 + 32 / 2 &&
		std::abs(Player_PosY - Block_PosY) < 32 / 2 + 32 / 2)
	{
		vectlx = Player_PosX - Block_PosX;
		vectly = Player_PosY - Block_PosY;
				

		if (std::abs(vectlx) < std::abs(vectly))//上からの当たり判定
		{
			if (vectly < 0)
			{
				return true;
				
			}
		}

	}*/
=======

}
bool Collision::Block_Collision_Right(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//ブロック右との当たり判定
	if (Player_PosX >= Block_PosX + 32 &&
		Player_PosX <= Block_PosX &&
		Player_PosY >= Block_PosY -32 &&
		Player_PosY <= Block_PosY )
	{
		return true;
	}


}
bool Collision::Block_Collision_Bottom(int Block_PosX, int Block_PosY,
	int Player_PosX, int Player_PosY)
{
	//ブロックの上との当たり判定
	if (Player_PosX >= Block_PosX &&
		Player_PosX <= Block_PosX + 32 &&
		Player_PosY <= Block_PosY &&
		Player_PosY >= Block_PosY - 32)
	{
		return true;
	}

>>>>>>> f1d2f7875e9ffbed1eeef35a88b7dc38f66ab015

}

//bool Collision::Item_Collision()
//{
//
//}