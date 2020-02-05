#pragma once
class Base_Scene
{
public:
	Base_Scene();
	~Base_Scene();
	//=0は中身が空っぽという意味
	virtual void Update() = 0;//継承させたいからvirtual

	virtual void Draw() = 0;//継承させたいからvirtual

private:

};

