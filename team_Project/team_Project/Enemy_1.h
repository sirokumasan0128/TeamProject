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
};

