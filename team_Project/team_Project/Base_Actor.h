#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//Œ»İ‚ÌÀ•W

	bool isDead;


public:
	Base_Actor();

	virtual void Update();//object‚²‚Æ‚É‰Â•Ï‚É‚µ‚½‚¢

	~Base_Actor();



};

