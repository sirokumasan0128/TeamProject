#pragma once
#include<string>
#include"KeyInput.h"


class Title
{
private:

	int title_Tex;

	bool isGame_Start,//ゲームスタートフラグ
		 isPlayer_Init;//ステージ1初期化フラグ
public:

	void Title_Init();

	void Title_Update();

	void Title_Draw();

	void SetIsGame_Start(bool isGame_Start) { this->isGame_Start = isGame_Start; }
	bool GetIsGame_Start() { return isGame_Start; }

	void SetIsPlayer_Init(bool isPlayer_Init) { this->isPlayer_Init = isPlayer_Init; }
	bool GetIsPlayer_Init() { return isPlayer_Init; }

	KeyInput keyInput;//毎回これを入れてあげる

};