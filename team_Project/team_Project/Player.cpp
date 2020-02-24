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
	//�v���C���[��1�t���[���O�̏�Ԃ�����B
	if (player_Camera_StaggerX != stagger_InitX)
	{
		//�v���C���[�̍��W���炵�����݈ʒu�ɑ����Z
		pos_X += player_Camera_StaggerX;
		pos_Y += player_Camera_StaggerY;

		//�����ő�����邱�Ƃŏ�����ʂ�Ȃ�����B���̂�2��ڈȍ~���ʂ�Ȃ��B
		stagger_InitX = player_Camera_StaggerX;
		stagger_InitY = player_Camera_StaggerX;
	}

	//�v���C���[�̈ړ�����������
	velocity_X = 0;
	velocity_Y = 0;

	//�v���C���[�p�̈ړ�����
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

	//�v���C���[�̕`�悷�炵�m�F�p
	DrawFormatString(500, 30, Cr, "%d�@player_Update���̕`�悸�炵X", player_Camera_StaggerX);
	DrawFormatString(500, 45, Cr, "%d�@player_Update���̕`�悸�炵Y", player_Camera_StaggerY);


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


void Player::Draw(int camera_StaggerX, int camera_StaggerY)
{
	//�v���C���[�p�̕`�悸�炵����
	player_Camera_StaggerX = camera_StaggerX;
	player_Camera_StaggerY = camera_StaggerY;

	//�`�悸�炵�̊m�F�p
	DrawFormatString(500, 0, Cr, "%d�@player_Draw���̕`�悸�炵X", player_Camera_StaggerX);
	DrawFormatString(500, 15, Cr, "%d�@player_Draw���̕`�悸�炵Y", player_Camera_StaggerY);

	//�v���C���[�̕`��
	DrawGraph(pos_X,pos_Y, player_Tex, TRUE);

}

void Player::Finish()
{

}

Player::~Player()
{
}
