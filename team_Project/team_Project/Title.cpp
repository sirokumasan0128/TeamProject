#include<DxLib.h>
#include"Title.h"

using namespace std;

void Title::Title_Init()
{
	
	isGame_Start = false;

}


void Title::Title_Update()
{
	keyInput.update();

	if (keyInput.InputKeyTrigger(KEY_INPUT_SPACE))
	{
		isGame_Start = true;
		isPlayer_Init = true;
	}

}

void Title::Title_Draw()
{

	title_Tex = LoadGraph("title_Sample.png");
	DrawGraph(0,0,title_Tex,TRUE);//タイトル画面の表示

}