#pragma once

#define MAP_WIDTH 100
#define MAP_HEIGHT 34
#define BLOCK_SIZE 32

class Base_Scene
{
private:

public:
	Base_Scene();
	~Base_Scene();

	virtual void Init() = 0;//�K����������������virtual��t����

	virtual void Update() = 0;//�K����������������virtual��t����

	virtual void Draw() = 0;//�K����������������virtual��t����

	virtual void Finish() = 0;//�K����������������virtual��t����
};

