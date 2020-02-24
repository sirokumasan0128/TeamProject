#pragma once
#include<string>
#include"Base_Actor.h"

#define PLAYER_SIZE 32

class Player
{
private:
	//�v���C���[�p�̕ϐ�
	int pos_X;
	int pos_Y;
	int Cr;
	int velocity_X;
	int velocity_Y;
	int player_Tex;

	bool isDead;
	bool isOnce;

	//�v���C���[�����炷�p
	int player_Camera_StaggerX;
	int player_Camera_StaggerY;

	//��񂾂����炷�p�̒l��������p
	int stagger_InitX;
	int stagger_InitY;


public:

	Base_Actor base_Actor;
	

	void Init(int pos_X,int pos_Y);
	void Update();
	void Draw(int camera_StaggerX, int camera_StaggerY);
	void Finish();

	int GetPlayerPosX() { return pos_X; }
	void SetPlayerPosX(int pos_X);
	int GetPlayerPosY() { return pos_Y; }
	void SetPlayerPosY(int pos_Y);

	

	Player();
	~Player();
};

