#pragma once
#include"Base_Scene.h"

class Scene_Manager
{
public:

	enum Scene {
		TITLE,
		STAGE1,
	};

	static void Change_Scene(Scene scene);//シーンを引数によって変える
	static void Update();                 //現在のシーンの描画
	static void Draw();                   //現在のシーンの描画関数


private:
	static Base_Scene* m_pScene_1;          //現在のシーン(レイヤー1)

};

