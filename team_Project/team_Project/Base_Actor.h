#pragma once
class Base_Actor
{
private:

	int pos_X;     //プレイヤーのポジションX
	int pos_Y;     //プレイヤーのポジションY
	int velocity_X;//移動量X
	int velocity_Y;//移動量Y
	bool isDead;   //プレイヤーしかないけど死亡フラグ

public:
	Base_Actor();
	~Base_Actor();

	 void Init();
	 void Update();
	 void Draw();
	 void Finish();

};

