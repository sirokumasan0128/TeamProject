#pragma once
class Base_Actor
{
private:

	int pos_X,
		pos_Y;//現在の座標


public:
	Base_Actor();

	virtual void Update() = 0;//objectごとに可変にしたい

	virtual void Draw() = 0;//objectごとに可変にしたい

	~Base_Actor();



};

