#pragma once
class Base_Actor
{
private:



public:
	Base_Actor();
	int pos_X;//���݂̍��WX
	int	pos_Y;//���݂̍��WY
	int velocity_X;//�ړ���X
	int velocity_Y;//�ړ���Y
	bool isDead;//�v���C���[�����Ȃ����ǎ��S�t���O
	bool isHit;//�L�����N�^�̓�������������t���O

	virtual void Init();
	virtual void Update();//object���Ƃɉςɂ�����
	virtual void Draw();//��
	virtual void Finish();//��

	~Base_Actor();

	
};

