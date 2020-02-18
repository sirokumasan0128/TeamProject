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
	//画像のポジション用
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
	//             ↓      ↓ポインタでない
	//DrawGraph(int X,int Y,int GrHandle,TRUE);
	//DrawGraph(*(&tex_X), *(&tex_Y), title_Tex, TRUE);//タイトル画面の表示
	DrawGraph(*tex_Pos_X, *tex_Pos_Y, title_Tex, TRUE);//タイトル画面の表示

}

void Title::Finish()
{

}

Title::~Title()
{
}
