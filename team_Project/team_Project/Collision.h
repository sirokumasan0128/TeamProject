#pragma once

class Collision
{

private:

public:
	bool Block_Collision_Up(int Block_PosX,//�u���b�N�̍����X
		int Block_PosY,//�u���b�N�̍����Y
		int Player_PosX,//�v���C���[�̍����X
		int Player_posY);//�v���C���[�̍����Y

	bool Block_Collision_Left(int Block_PosX,//�u���b�N�̍����X
		int Block_PosY,//�u���b�N�̍����Y
		int Player_PosX,//�v���C���[�̍����X
		int Player_posY);//�v���C���[�̍����Y

	bool Block_Collision_Right(int Block_PosX,//�u���b�N�̍����X
		int Block_PosY,//�u���b�N�̍����Y
		int Player_PosX,//�v���C���[�̍����X
		int Player_posY);//�v���C���[�̍����Y

	bool Block_Collision_Bottom(int Block_PosX,//�u���b�N�̍����X
		int Block_PosY,//�u���b�N�̍����Y
		int Player_PosX,//�v���C���[�̍����X
		int Player_posY);//�v���C���[�̍����Y

	bool Item_Collision();//���Ȃǂ̃A�C�e���̓����蔻��̃��\�b�h
};