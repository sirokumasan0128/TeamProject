#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//Œ»İ‚ÌÀ•W


public:
	Base_Actor();

	virtual void Update() = 0;//object‚²‚Æ‚É‰Â•Ï‚É‚µ‚½‚¢

	virtual void Draw() = 0;//object‚²‚Æ‚É‰Â•Ï‚É‚µ‚½‚¢

	~Base_Actor();



};

