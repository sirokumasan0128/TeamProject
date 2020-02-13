#pragma once
#include"Player.h"
#define MAP_WIDTH 60
#define MAP_HEIGHT 34
#define BLOCK_SIZE 32


class Base_Scene
{
private:

public:
	Base_Scene();
	~Base_Scene();
	//=0は中身が空っぽという意味

	Player *player;

	virtual void Init(Player *player) = 0;//0をつけると実装しなければいけない

	virtual void Update() = 0;//継承させたいからvirtual

	virtual void Draw() = 0;//継承させたいからvirtual

	virtual void Finish() = 0;

};

