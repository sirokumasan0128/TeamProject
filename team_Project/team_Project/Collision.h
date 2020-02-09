#pragma once

class Collision
{

private:

public:
	bool Block_Collision_Up(int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Left(int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Right(int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Bottom(int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Item_Collision();//鍵などのアイテムの当たり判定のメソッド
};