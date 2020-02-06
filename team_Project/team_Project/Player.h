#pragma once
#include<string>


#define PLAYER_SIZE 32

class Player:public Base_Actor//Stage1.hに書かないと継承されん
{
	using string = std::string;

private:

	//プレイヤー用の変数
	int pos_X,//プレイヤーのポジションX
		pos_Y,//プレイヤーのポジションY
		Cr,//プレイヤーの色(デモ用)
		velocity_X,//プレイヤーの移動量X
		velocity_Y;//プレイヤーの移動量Y

	int player_Tex;

	bool isHit,//プレイヤーのヒットフラグ
		 isDead;//プレイヤーの死亡フラグ

public:
	Player();
	~Player();
	void Init();//プレイヤー用の初期化用

	void Update();//プレイヤーの移動用

	void Draw();//プレイヤーの描画用

	void SetPlayerPosX(int pos_X) { this->pos_X = pos_X; }
	int GetPlayerPosX() { return pos_X; }
	void SetPlayerPosY(int pos_Y) { this->pos_Y = pos_Y; }
	int GetPlayerPosY() { return pos_Y; }

	void SetPlayerVelocityX(int velocity_X) { this->velocity_X = velocity_X; }
	int GetPlayerVelocityX() { return velocity_X; }
	void SetPlayerVelocityY(int velocity_Y) { this->velocity_Y = velocity_Y; }
	int GetPlayerVelocityY() { return velocity_Y; }

};