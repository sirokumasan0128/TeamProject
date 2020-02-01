#include<DxLib.h>
#include<iostream>
#include "Player.h"

using namespace std;

void Player::Init()
{
	pos_X = 300;
	pos_Y = 400;
	Cr = GetColor(255,255,255);
	velocity_X = 0;
	velocity_Y = 0;
	player_Tex = LoadGraph("player_Sample.png");

	isHit = false;
	isDead = false;
}

void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_A) == 1)
	{
		velocity_X -= 5;
	}
	if (CheckHitKey(KEY_INPUT_W) == 1)
	{
		velocity_Y -= 5;
	}
	if (CheckHitKey(KEY_INPUT_D) == 1)
	{
		velocity_X += 5;
	}
	if (CheckHitKey(KEY_INPUT_S) == 1)
	{
		velocity_Y += 5;
	}

}

void Player::Draw()
{
	
		DrawGraph(pos_X + velocity_X,pos_Y + velocity_Y,player_Tex,FALSE);
}