#include<DxLib.h>
#include "Player.h"
//#include "Scene_Manager.h"


Player::Player()
	:player_Tex(0), velocity_X(0), velocity_Y(0),
	isDead(false),isOnce(false),
	stagger_InitX(0), stagger_InitY(0)

{
}

void Player::Init(int pos_X, int pos_Y)
{

	Cr = (255, 255, 255);
	this->pos_X = pos_X;
	this->pos_Y = pos_Y;

	//p_pos_X = &this->pos_X;
	//p_pos_Y = &this->pos_Y;

	player_Tex = LoadGraph("player_Sample.png");
	velocity_X = 0;
	velocity_Y = 0;
	isDead = false;
}

void Player::Update()
{

	//プレイヤーの移動処理初期化
	velocity_X = 0;
	velocity_Y = 0;

	//プレイヤー用の移動処理
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


	//プレイヤーの移動
	pos_X = pos_X + velocity_X;
	pos_Y = pos_Y + velocity_Y;



}

void Player::SetPlayerPosX(int pos_X)
{
	this->pos_X = pos_X;
}
void Player::SetPlayerPosY(int pos_Y)
{
	this->pos_Y = pos_Y;
}


void Player::Draw()
{

	//プレイヤーの描画
	DrawGraph(pos_X,pos_Y, player_Tex, TRUE);

}

void Player::Finish()
{

}

Player::~Player()
{
}
