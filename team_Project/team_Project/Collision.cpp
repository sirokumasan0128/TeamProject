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


}

//bool Collision::Item_Collision()
//{
//
//}