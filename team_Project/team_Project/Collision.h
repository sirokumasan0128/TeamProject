#pragma once

class Collision
{

private:

public:
	bool Block_Collision_Up(
		int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Left(
		int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Right(
		int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Block_Collision_Bottom(
		int Block_PosX,//ブロックの左上のX
		int Block_PosY,//ブロックの左上のY
		int Player_PosX,//プレイヤーの左上のX
		int Player_posY);//プレイヤーの左上のY

	bool Floor_Camera(
		int Room_LeftUpX,//部屋1の左上の座標
		int Room_LeftUpY,//部屋1の左上の座標
		int Room_RightDownX,//部屋1の右下の座標
		int Room_RightDownY,//部屋1の右下の座標
		int Player_PosX,//プレイヤーの座標X
		int Player_PosY);//プレイヤーの座標Y

	bool Item_Collision();//鍵などのアイテムの当たり判定のメソッド
};