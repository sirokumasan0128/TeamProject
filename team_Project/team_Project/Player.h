#pragma once
#include<string>
#include"Base_Actor.h"

#define PLAYER_SIZE 32

class Player
{
private:
	//�v���C���[�p�̕ϐ�
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

