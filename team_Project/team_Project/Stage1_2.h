#pragma once
#include<vector>
#include "Base_Scene.h"
#include "Player.h"
#include"Collision.h"


class Stage1_2:public Base_Scene
{
private:

	//プレイヤーの位置情報を持つ変数
	int* pos_X;
	int* pos_Y;

	//アセットのロード用
	int	ground_Block2;

	//レイヤー2用の当たり判定用
	int Block_Position;


	//マップの描画用
	int Stage1_MapInfo_Layer2[MAP_HEIGHT][MAP_WIDTH] =
	{
		{100,102,102,102,102,102,102,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,102,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,102,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,103,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,102,102,102,102,102,100,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,100,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{102,102,102,102,102,102,100,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,104,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,100,100,100,100,100,102,100,100,},
		{102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,},
		{102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,},
		{102,100,100,100,100,100,100,100,100,100,100,103,100,100,100,100,100,100,100,100,100,100,100,100,100,103,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,103,100,100,100,100,100,100,100,100,100,100,100,100,103,100,100,102,100,100,},
		{102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,},
		{102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,},
		{102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,100,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,100,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,103,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,102,102,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,102,102,102,102,102,102,102,102,102,102,102,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,},
		{100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,},
	};

public:

	
	//Player *player;
	Player player;
	Collision collision;

	Stage1_2();
	~Stage1_2();

	void Init();
	void Update();
	void Draw();
	void Finish();

	void Stage1_2_Map_Hit();//マップとプレイヤーの当たり判定


	void SetBlockPos(int Block_Position) { this->Block_Position = Block_Position; }
	int GetBlockPos() { return Block_Position; }

};