#include<DxLib.h>
#include "Player.h"
#include "Scene_Manager.h"


Player::Player()
{
}

void Player::Init(int )
{

	//*Cr = (255,255,255);
	pos_X = 0;
	pos_Y = 0;
	p_pos_X = &pos_X;
	p_pos_Y = &pos_Y;
	player_Tex = LoadGraph("player_Sample.png");
	velocity_X = 0;
	velocity_Y = 0;
	p_velocity_X = &velocity_X;
	p_velocity_Y = &velocity_Y;
	isDead = false;
}

void Player::Update()
{
	velocity_X = 0;
	velocity_Y = 0;

	if (CheckHitKey(KEY_INPUT_A) == 1)
	{
		velocity_X -= 6;
	}
	if (CheckHitKey(KEY_INPUT_W) == 1)
	{
		velocity_Y -= 6;

	}
	if (CheckHitKey(KEY_INPUT_D) == 1)
	{
		velocity_X += 6;

	}
	if (CheckHitKey(KEY_INPUT_S) == 1)
	{
		velocity_Y += 6;
	}

	p_velocity_X = &velocity_X;
	p_velocity_Y = &velocity_Y;

	//*pos_X = *pos_X; //+ velocity_X;
	//pos_X = +velocity_X;
	//*pos_Y = *pos_Y;//+velocity_Y;
	//pos_Y = +velocity_Y;

	
}

void Player::Draw()
{
	DrawGraph(pos_X, pos_Y, player_Tex, TRUE);

}

void Player::Finish()
{

}

Player::~Player()
{
}
