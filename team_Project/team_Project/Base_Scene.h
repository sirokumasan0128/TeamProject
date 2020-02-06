#pragma once

#define MAP_WIDTH 60
#define MAP_HEIGHT 34
#define BLOCK_SIZE 32


class Base_Scene
{
private:

public:
	Base_Scene();
	~Base_Scene();
	//=0�͒��g������ۂƂ����Ӗ�

	virtual void Init() = 0;//0������Ǝ������Ȃ���΂����Ȃ�

	virtual void Update() = 0;//�p��������������virtual

	virtual void Draw() = 0;//�p��������������virtual

	virtual void Finish() = 0;

};

