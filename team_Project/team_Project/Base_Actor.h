#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//���݂̍��W


public:
	Base_Actor();

	virtual void Update() = 0;//object���Ƃɉςɂ�����

	virtual void Draw() = 0;//object���Ƃɉςɂ�����

	~Base_Actor();



};

