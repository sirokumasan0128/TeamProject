#pragma once


class Enemy_1
{
private:

	//Enemy�̉摜�p
	int enemy_Tex;

	int type;
	int pos_X;
	int	pos_Y;
	int velocity_X;
	int	velocity_Y;
	bool isDiscovery;//�����邩������Ȃ����t���O


public:
	Enemy_1();
	~Enemy_1();

	void Init(int enemy_Number);
	void Update();
	void Draw();
	void Finsh();

	int GetEnemy_1PosX() { return pos_X; }
	void SetEnemy_1PosX(int pos_X);
	int GetEnemy_1PosY() { return pos_Y; }
	void SetEnemy_1PosY(int pos_Y);

};

