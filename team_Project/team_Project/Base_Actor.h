#pragma once
class Base_Actor
{
private:

	int pos_X;
	int	pos_Y;//���݂̍��W

	bool isDead;


public:
	Base_Actor();

	virtual void Init();
	virtual void Update();//object���Ƃɉςɂ�����
	virtual void Draw();//��
	virtual void Finish();//��

	~Base_Actor();



};

