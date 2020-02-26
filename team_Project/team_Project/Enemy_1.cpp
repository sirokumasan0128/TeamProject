#include<DxLib.h>
#include "Enemy_1.h"


Enemy_1::Enemy_1()
{
}

void Enemy_1::Init(int enemy_Number)
{

	enemy_Tex = LoadGraph("enemy_Sample.png");

	typedef struct Enemy
	{
		int type;
		int pos_X;
		int pos_Y;
		int velocity_X;
		int velocity_Y;
		int Width;//‰¡•
		int Height;//c•
		bool Discovery;//Œ©‚Â‚©‚é‚©Œ©‚Â‚©‚ç‚È‚¢‚©ƒtƒ‰ƒO
	};
}

void Enemy_1::Update()
{

}

void Enemy_1::Draw()
{

}

void Enemy_1::Finsh()
{

}

Enemy_1::~Enemy_1()
{
}
