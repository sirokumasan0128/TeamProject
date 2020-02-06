#pragma once
class Base_Actor
{
private:

	int pos_X;
	int	pos_Y;//現在の座標

	bool isDead;


public:
	Base_Actor();

	virtual void Init();
	virtual void Update();//objectごとに可変にしたい
	virtual void Draw();//可変
	virtual void Finish();//可変

	~Base_Actor();



};

