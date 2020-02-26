#pragma once


class Enemy_1
{
private:

	//Enemy‚Ì‰æ‘œ—p
	int enemy_Tex;

	int type;
	int pos_X;
	int	pos_Y;
	int velocity_X;
	int	velocity_Y;
	bool isDiscovery;//Œ©‚Â‚©‚é‚©Œ©‚Â‚©‚ç‚È‚¢‚©ƒtƒ‰ƒO


public:
	Enemy_1();
	~Enemy_1();

	void Init(int enemy_Number);
	void Update();
	void Draw();
	void Finsh();
};

