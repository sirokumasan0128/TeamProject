#pragma once
#include"Base_Scene.h"
#include"Collision.h"

class Stage1_2
{
private:
	//プレイヤーの位置情報用
	int* pos_X;
	int* pos_Y;

	//アセットのロード用
	int ground_tex2;

	//

public:
	Stage1_2();
	~Stage1_2();

	void Init();
	void Update();
	void Draw();
	void Finish();

};

