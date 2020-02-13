#include<DxLib.h>
#include"Scene_Manager.h"
#include"Title.h"

using namespace std;

Title::Title()
	:title_Tex(0),isGame_Start(false)
{
	//title_Tex = LoadGraph("");
}



void Title::Init(Player *player)
{
	title_Tex = LoadGraph("title_Sample.png");

}

void Title::Update()
{
	keyInput.update();
	Scene_Manager* scene_Manager;

	if (keyInput.InputKeyTrigger(KEY_INPUT_SPACE))
	{
		scene_Manager->Change_Scene(scene_Manager->STAGE1);
	}

}

void Title::Draw()
{

	DrawGraph(0,0,title_Tex,TRUE);//タイトル画面の表示

}

void Title::Finish()
{

}

Title::~Title()
{

}