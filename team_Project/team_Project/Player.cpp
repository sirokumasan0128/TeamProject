#include<DxLib.h>
#include "Player.h"
//#include "Scene_Manager.h"


Player::Player()
	:player_Front_Tex(0), player_Left_Tex(0),
	player_Right_Tex(0), player_Back_Tex(0),
	velocity_X(0), velocity_Y(0),
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

	//�v���C���[�̑O�ʗp
	player_Front_Tex = LoadGraph("player_Sample.png");
	//�v���C���[�̍������p
	player_Left_Tex = LoadGraph("player_Sample.png");
	//�v���C���[�̉E�����p
	player_Right_Tex = LoadGraph("player_Sample.png");
	//�v���C���[�̌������p
	player_Back_Tex = LoadGraph("player_Sample.png");

	velocity_X = 0;
	velocity_Y = 0;
	isDead = false;
	draw_Direction = RIGHT;
}

void Player::Update()
{

	//�v���C���[�̈ړ�����������
	velocity_X = 0;
	velocity_Y = 0;

	//�v���C���[�p�̈ړ�����
	if (CheckHitKey(KEY_INPUT_A) == 1)
	{
		draw_Direction = LEFT;
		velocity_X -= 6;
	}
	if (CheckHitKey(KEY_INPUT_W) == 1)
	{
		draw_Direction = BACK;
		velocity_Y -= 6;
	}
	if (CheckHitKey(KEY_INPUT_D) == 1)
	{
		draw_Direction = RIGHT;
		velocity_X += 6;
	}
	if (CheckHitKey(KEY_INPUT_S) == 1)
	{
		draw_Direction = FRONT;
		velocity_Y += 6;
	}


	//�v���C���[�̈ړ�
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
	//�v���C���[�̌����ʂ̕`��
	switch (draw_Direction)
	{
	case Player::FRONT:
		DrawGraph(pos_X, pos_Y, player_Front_Tex, TRUE);
		break;
	case Player::LEFT:
		DrawGraph(pos_X, pos_Y, player_Left_Tex, TRUE);
		break;
	case Player::RIGHT:
		DrawGraph(pos_X, pos_Y, player_Right_Tex, TRUE);
		break;
	case Player::BACK:
		DrawGraph(pos_X, pos_Y, player_Back_Tex, TRUE);
		break;
	default:
		break;
	}

}

void Player::Finish()
{

}

Player::~Player()
{
}
