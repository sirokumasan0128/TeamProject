#include<DxLib.h>
#include"Scene_manager.h"
#include "Title.h"



Title::Title()
	//:title_Tex(0),tex_Y(0),tex_X(0)
{
}

void Title::Init()
{
	title_Tex = LoadGraph("title_Sample.png");
	//�摜�̃|�W�V�����p
	tex_X = 0;
	tex_Y = 0;
	tex_Pos_X = &tex_X;
	tex_Pos_Y = &tex_Y;
}

void Title::Update()
{
	keyInput.Update();
	if (keyInput.InputKeyTrigger(KEY_INPUT_SPACE))
	{
		scene_Manager->Change_Scene(scene_Manager->STAGE1);
	}
}

void Title::Draw()
{
	//             ��      ���|�C���^�łȂ�
	//DrawGraph(int X,int Y,int GrHandle,TRUE);
	//DrawGraph(*(&tex_X), *(&tex_Y), title_Tex, TRUE);//�^�C�g����ʂ̕\��
	DrawGraph(*tex_Pos_X, *tex_Pos_Y, title_Tex, TRUE);//�^�C�g����ʂ̕\��

}

void Title::Finish()
{

}

Title::~Title()
{
}
