#pragma once
class Base_Actor
{
private:

	int pos_X;     //�v���C���[�̃|�W�V����X
	int pos_Y;     //�v���C���[�̃|�W�V����Y
	int velocity_X;//�ړ���X
	int velocity_Y;//�ړ���Y
	bool isDead;   //�v���C���[�����Ȃ����ǎ��S�t���O

public:
	Base_Actor();
	~Base_Actor();

	 void Init();
	 void Update();
	 void Draw();
	 void Finish();

};

