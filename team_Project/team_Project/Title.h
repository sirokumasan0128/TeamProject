#pragma once
#include<string>
#include"KeyInput.h"


class Title
{
private:

	int title_Tex;

	bool isGame_Start;//ゲームスタートフラグ

public:

	void Title_Init();

	void Title_Update();

	void Title_Draw();

	void SetIsGame_Start(bool isGame_Start) { this->isGame_Start = isGame_Start; }
	bool GetIsGame_Start() { return isGame_Start; }

	KeyInput keyInput;//毎回これを入れてあげる

};