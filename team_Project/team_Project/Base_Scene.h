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
	//=0‚Í’†g‚ª‹ó‚Á‚Û‚Æ‚¢‚¤ˆÓ–¡

	virtual void Init() = 0;//0‚ğ‚Â‚¯‚é‚ÆÀ‘•‚µ‚È‚¯‚ê‚Î‚¢‚¯‚È‚¢

	virtual void Update() = 0;//Œp³‚³‚¹‚½‚¢‚©‚çvirtual

	virtual void Draw() = 0;//Œp³‚³‚¹‚½‚¢‚©‚çvirtual

	virtual void Finish() = 0;

};

