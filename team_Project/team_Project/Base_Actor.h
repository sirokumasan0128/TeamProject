#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//���݂̍��W

	bool isDead;


public:
	Base_Actor();

	virtual void Update();//object���Ƃɉςɂ�����

	~Base_Actor();



};

