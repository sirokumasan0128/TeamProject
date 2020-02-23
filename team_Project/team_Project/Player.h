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
	int* p_pos_X;
	int* p_pos_Y;
	int Cr;
	int velocity_X;
	int velocity_Y;
	int* p_velocity_X;
	int* p_velocity_Y;
	int player_Tex;
	int* p_player_Tex;

	bool isDead;

	//プレイヤーをずらす用
	int player_Camera_StaggerX;
	int player_Camera_StaggerY;


public:

	Base_Actor base_Actor;
	

	void Init(int pos_X,int pos_Y);
	void Update();
	void Draw(int camera_StaggerX, int camera_StaggerY);
	void Finish();

	int GetPlayerPosX() { return pos_X; }
	void SetPlayerPosX(int pos_X);
	int GetPlayerPosY() { return pos_Y; }
	void SetPlayerPosY(int pos_Y);

	

	Player();
	~Player();
};

