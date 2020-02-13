#pragma once
#include"Player.h"
//#include"Base_Scene.h"
//前方参照
class Base_Scene;

class Scene_Manager
{
public:

	enum Scene {
		TITLE,
		STAGE1,
	};


	static void Change_Scene(Scene scene);//シーンを引数によって変える
	static void Init();     //現在のシーンの初期化
	static void Update();                 //現在のシーンの描画
	static void Draw();                   //現在のシーンの描画関数
	static void Finish();                 //現在のシーンの終了処理

private:
	static Base_Scene* m_pScene_1;          //現在のシーン(レイヤー1)

};

