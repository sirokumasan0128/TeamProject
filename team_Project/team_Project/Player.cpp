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
	//player.base_Actor.pos_X = 300;
	//player.base_Actor.pos_Y = 400;

	pos_X = player.base_Actor.pos_X = 300;
	pos_Y = player.base_Actor.pos_Y = 400;
	
	Cr = GetColor(255,255,255);
	velocity_X = 0;
	velocity_Y = 0;
	player_Tex = LoadGraph("player_Sample.png");

	isHit = player.base_Actor.isHit;
	isDead = player.base_Actor.isDead;
}

void Player::Update()
{
	velocity_X = 0;
	velocity_Y = 0;

	if (CheckHitKey(KEY_INPUT_A) == 1)
	{
		velocity_X -= 1;
	}
	if (CheckHitKey(KEY_INPUT_W) == 1)
	{
		velocity_Y -= 1;

	}
	if (CheckHitKey(KEY_INPUT_D) == 1)
	{
		velocity_X += 1;

	}
	if (CheckHitKey(KEY_INPUT_S) == 1)
	{
		velocity_Y += 1;
	}


	pos_X = pos_X + velocity_X;
	pos_Y = pos_Y + velocity_Y;

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
