#pragma once
#include<string>

#define PLAYER_SIZE 32

class Player
{
	using string = std::string;

private:

	//プレイヤー用の変数
	int pos_X,//プレイヤーのポジションX
		pos_Y,//プレイヤーのポジションY
		Cr,//プレイヤーの色(デモ用)
		velocity_X,//プレイヤーの移動量X
		velocity_Y;//プレイヤーの移動量Y

	bool is_Hit,//プレイヤーのヒットフラグ
		 is_Dead;//プレイヤーの死亡フラグ

public:

	void Init();//プレイヤー用の初期化用

	void Move();//プレイヤーの移動用

	void Draw();//プレイヤーの描画用

};