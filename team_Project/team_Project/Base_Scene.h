#pragma once
class Base_Scene
{
public:
	Base_Scene();
	~Base_Scene();
	//=0�͒��g������ۂƂ����Ӗ�
	virtual void Update() = 0;//�p��������������virtual

	virtual void Draw() = 0;//�p��������������virtual

private:

};

