#pragma once
#include<string>
#include"Base_Actor.h"

#define PLAYER_SIZE 32

class Player
{
private:
	//プレイヤー用の変数
	int pos_X;
	int pos_Y;
	int Cr;
	int velocity_X;
	int velocity_Y;

	//プレイヤー用の向き別テクスチャ変数
	int player_Front_Tex;
	int player_Left_Tex;
	int player_Right_Tex;
	int player_Back_Tex;

	bool isDead;
	bool isOnce;

	//プレイヤーをずらす用
	int player_Camera_StaggerX;
	int player_Camera_StaggerY;

	//一回だけずらす用の値を代入する用
	int stagger_InitX;
	int stagger_InitY;

	enum Draw_Direction{
		FRONT,
		LEFT,
		RIGHT,
		BACK,
	};

	Draw_Direction draw_Direction;

public:

	Base_Actor base_Actor;
	

	void Init(int pos_X,int pos_Y);
	void Update();
	void Draw();
	void Finish();

	int GetPlayerPosX() { return pos_X; }
	void SetPlayerPosX(int pos_X);
	int GetPlayerPosY() { return pos_Y; }
	void SetPlayerPosY(int pos_Y);

	

	Player();
	~Player();
};

