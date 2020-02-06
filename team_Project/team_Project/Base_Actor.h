#pragma once
class Base_Actor
{
private:

	int pos_X;
	int	pos_Y;//Œ»İ‚ÌÀ•W

	bool isDead;


public:
	Base_Actor();

	virtual void Init();
	virtual void Update();//object‚²‚Æ‚É‰Â•Ï‚É‚µ‚½‚¢
	virtual void Draw();//‰Â•Ï
	virtual void Finish();//‰Â•Ï

	~Base_Actor();



};

