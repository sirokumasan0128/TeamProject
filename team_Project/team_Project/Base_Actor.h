#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//現在の座標

	bool isDead;


public:
	Base_Actor();

	virtual void Update();//objectごとに可変にしたい

	~Base_Actor();



};

