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

	//if (CheckHitKey(KEY_INPUT_SPACE) == 1)
	//{
	//	isGame_Start = true;
	//}

	//KeyInput keyInput;

	if (keyInput.InputKeyTrigger(KEY_INPUT_SPACE))
	{

		isGame_Start = true;

	}

	//if (key[KEY_INPUT_SPACE] == 1)
	//{
	//	isGame_Start = true;
	//}
	
}

void Title::Title_Draw()
{

	title_Tex = LoadGraph("title_Sample.png");
	DrawGraph(0,0,title_Tex,TRUE);//タイトル画面の表示

}