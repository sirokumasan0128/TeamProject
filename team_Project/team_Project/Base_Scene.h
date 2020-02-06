#pragma once
class Base_Scene
{
public:
	Base_Scene();
	~Base_Scene();
	//=0‚Í’†g‚ª‹ó‚Á‚Û‚Æ‚¢‚¤ˆÓ–¡
	virtual void Update() = 0;//Œp³‚³‚¹‚½‚¢‚©‚çvirtual

	virtual void Draw() = 0;//Œp³‚³‚¹‚½‚¢‚©‚çvirtual

private:

};

