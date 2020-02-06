#pragma once
#include<string>


#define PLAYER_SIZE 32

class Player:public Base_Actor//Stage1.h�ɏ����Ȃ��ƌp�������
{
	using string = std::string;

private:

	//�v���C���[�p�̕ϐ�
	int pos_X,//�v���C���[�̃|�W�V����X
		pos_Y,//�v���C���[�̃|�W�V����Y
		Cr,//�v���C���[�̐F(�f���p)
		velocity_X,//�v���C���[�̈ړ���X
		velocity_Y;//�v���C���[�̈ړ���Y

	int player_Tex;

	bool isHit,//�v���C���[�̃q�b�g�t���O
		 isDead;//�v���C���[�̎��S�t���O

public:
	Player();
	~Player();
	void Init();//�v���C���[�p�̏������p

	void Update();//�v���C���[�̈ړ��p

	void Draw();//�v���C���[�̕`��p

	void SetPlayerPosX(int pos_X) { this->pos_X = pos_X; }
	int GetPlayerPosX() { return pos_X; }
	void SetPlayerPosY(int pos_Y) { this->pos_Y = pos_Y; }
	int GetPlayerPosY() { return pos_Y; }

	void SetPlayerVelocityX(int velocity_X) { this->velocity_X = velocity_X; }
	int GetPlayerVelocityX() { return velocity_X; }
	void SetPlayerVelocityY(int velocity_Y) { this->velocity_Y = velocity_Y; }
	int GetPlayerVelocityY() { return velocity_Y; }

};