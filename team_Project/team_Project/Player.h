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

	int player_Tex;

public:

	Base_Actor base_Actor;

	void Init();
	void Update();
	void Draw();
	void Finish();

	Player();
	~Player();
};

