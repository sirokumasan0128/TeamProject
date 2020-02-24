#include<DxLib.h>
#include "Player.h"
#include "Scene_Manager.h"


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
	//プレイヤーの1フレーム前の状態を入れる。
	if (player_Camera_StaggerX != stagger_InitX)
	{
		//プレイヤーの座標ずらしを現在位置に足し算
		pos_X += player_Camera_StaggerX;
		pos_Y += player_Camera_StaggerY;

		//ここで代入することで処理を通らなくする。何故か2回目以降も通らない。
		stagger_InitX = player_Camera_StaggerX;
		stagger_InitY = player_Camera_StaggerX;
	}

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

	//プレイヤーの描画すらし確認用
	DrawFormatString(500, 30, Cr, "%d　player_Update内の描画ずらしX", player_Camera_StaggerX);
	DrawFormatString(500, 45, Cr, "%d　player_Update内の描画ずらしY", player_Camera_StaggerY);


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


void Player::Draw(int camera_StaggerX, int camera_StaggerY)
{
	//プレイヤー用の描画ずらしを代入
	player_Camera_StaggerX = camera_StaggerX;
	player_Camera_StaggerY = camera_StaggerY;

	//描画ずらしの確認用
	DrawFormatString(500, 0, Cr, "%d　player_Draw内の描画ずらしX", player_Camera_StaggerX);
	DrawFormatString(500, 15, Cr, "%d　player_Draw内の描画ずらしY", player_Camera_StaggerY);

	//プレイヤーの描画
	DrawGraph(pos_X,pos_Y, player_Tex, TRUE);

}

void Player::Finish()
{

}

Player::~Player()
{
}
