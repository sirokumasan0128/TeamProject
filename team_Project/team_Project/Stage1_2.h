#pragma once
#include"Base_Scene.h"
#include"Collision.h"

class Stage1_2
{
private:
	//�v���C���[�̈ʒu���p
	int* pos_X;
	int* pos_Y;

	//�A�Z�b�g�̃��[�h�p
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

