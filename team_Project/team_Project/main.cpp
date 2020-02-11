#include "DxLib.h"
#include "Scene_Manager.h"
#include "Base_Scene.h"
//シーン系
#include"Title.h"
#include"Stage1_1.h"
#include"Stage1_2.h"
#include"Stage1_3.h"

//キャラクタ系
#include"Player.h"

//入力係
#include"KeyInput.h"
//#include""

int WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_  HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)

{
	const char TITLE[] = "01_step";

	const int WinHeight = 1080;
	const int WinWidth = 1920;

	//ウィンドウモードに設定
	ChangeWindowMode(TRUE);

	//ウィンドウサイズを手動で変更できず、
	//かつウィンドウサイズに合わせて拡大できないようにする
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	//タイトルを表示
	SetMainWindowText(TITLE);

	//画面サイズの最大サイズ、カラービット数を設定
	SetGraphMode(WinWidth, WinHeight, 32);

	//画面サイズを設定(解像度との比率で設定)
	SetWindowSizeExtendRate(1.0);

	//画面の背景色を設定
	SetBackgroundColor(0, 0, 0);

	Scene_Manager* scene_Manager;
	scene_Manager->Change_Scene(scene_Manager->TITLE);




	KeyInput keyInput;

	//DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		//エラーが出たらマイナス値を返して終了
		return -1;
	}

		scene_Manager->Init();

	//永久ループを抜ける処理
	while (1)//簡単なループ処理
	{

		ClearDrawScreen();

		

		scene_Manager->Update();
		scene_Manager->Draw();

		//
		//switch (scene)
		//{
		//case TITLE_SCENE:
		//	title.Title_Update();
		//	title.Title_Draw();
		//	if (title.GetIsGame_Start() == true)
		//	{
		//		scene = STAGE1_SCENE;
		//	}
		//	break;
		//case STAGE1_SCENE:
		//	if (title.GetIsPlayer_Init() == true&&isPlayerInit == false)
		//	{
		//		
		//		player.Init();
		//		isPlayerInit = true;

		//	}
		//	player.Update();
		//	stage1_1.Stage1_1_Map_Draw();
		//	stage1_2.Stage1_2_Map_Draw();
		//	player.Draw();
		//	stage1_3.Stage1_3_Map_Draw();
		//	stage1_2.Stage1_2_Map_Hit();
		//	break;
		//}


		ScreenFlip(); 
		WaitTimer(20);//20ミリ秒
		if (ProcessMessage() == -1) break;//WindowsAPIのエラー処理
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break;//DxLibの入力処理
	}

	//何か押されるまで待機
	WaitKey();

	//Dxライブラリ終了処理
	DxLib_End();

	return 0;
}