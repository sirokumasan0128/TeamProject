#pragma once
#include<string>
#include"Base_Scene.h"
#include"KeyInput.h"

class Title:public Base_Scene
{
private:
	int title_Tex;
	//�摜�̃|�W�V�����p
	int tex_X;
	int tex_Y;
	int* tex_Pos_X;
	int* tex_Pos_Y;

public:
	Title();
	~Title();

	void Init();
	void Update();
	void Draw();
	void Finish();

	KeyInput keyInput;
	Scene_Manager* scene_Manager;
};

