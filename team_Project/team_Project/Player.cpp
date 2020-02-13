#include<DxLib.h>
#include<iostream>
#include "Player.h"

using namespace std;


Player::Player()
{


}

void Player::Init()
{	

	Player player;	

	pos_X = player.base_Actor.pos_X = 180;
	pos_Y = player.base_Actor.pos_Y = 360;
	
	Cr = GetColor(255,255,255);
	velocity_X = 0;
	velocity_Y = 0;
	player_Tex = LoadGraph("player_Sample.png");

	isHit = player.base_Actor.isHit;
	isDead = player.base_Actor.isDead;
}

void Player::SetPlayerPosX(int pos_X)
{
	this->pos_X = pos_X;
}
void Player::SetPlayerPosY(int pos_Y)
{
	this->pos_Y = pos_Y;
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


	pos_X = pos_X + velocity_X;
	pos_Y = pos_Y + velocity_Y;


	DrawFormatString(0, 9800, GetColor(255, 255, 255), "playerclass  %d\n%d",pos_X, pos_Y);

}

void Player::Draw()
{
	
		//DrawGraph(pos_X +velocity_X ,pos_Y + velocity_Y,player_Tex,FALSE);
		
		DrawGraph(pos_X,pos_Y,player_Tex,FALSE);

		//DrawFormatString(400, 400, GetColor(255, 255, 255), "%d\n%d", pos_X, pos_Y);


}

Player::~Player()
{



}
