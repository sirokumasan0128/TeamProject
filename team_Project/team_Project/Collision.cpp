#include<DxLib.h>
#include<iostream>
#include"Collision.h"

using namespace std;

bool Collision::Block_Collision(int Block_PosX,int Block_PosY,
								int Player_PosX,int Player_PosY)
{
	//ブロックの上との当たり判定
	if (Player_PosX >= Block_PosX &&
		Player_PosX <= Block_PosX + 32 &&
		Player_PosY <= Block_PosY &&
		Player_PosY >= Block_PosY - 32)
	{
		return true;
	}

	//ブロックの左との当たり判定
	if (Player_PosX <= Block_PosX &&
		Player_PosX >= Block_PosX - 32 &&
		Player_PosY >= Block_PosY &&
		Player_PosY <= Block_PosY + 32)
	{
		return true;
	}

}

//bool Collision::Item_Collision()
//{
//
//}