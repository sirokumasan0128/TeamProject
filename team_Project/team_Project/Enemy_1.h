#pragma once


class Enemy_1
{
private:

	//Enemyの画像用
	int enemy_Tex;

	int type;
	int pos_X;
	int	pos_Y;
	int velocity_X;
	int	velocity_Y;
	bool isDiscovery;//見つかるか見つからないかフラグ


public:
	Enemy_1();
	~Enemy_1();

	void Init(int enemy_Number);
	void Update();
	void Draw();
	void Finsh();
};

