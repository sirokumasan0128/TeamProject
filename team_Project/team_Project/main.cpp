#include "DxLib.h"
#include "Scene_Manager.h"
#include "Base_Scene.h"
//�V�[���n
#include"Title.h"
#include"Stage1_1.h"
#include"Stage1_2.h"
#include"Stage1_3.h"

//�L�����N�^�n
#include"Player.h"

//���͌W
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

	//�E�B���h�E���[�h�ɐݒ�
	ChangeWindowMode(TRUE);

	//�E�B���h�E�T�C�Y���蓮�ŕύX�ł����A
	//���E�B���h�E�T�C�Y�ɍ��킹�Ċg��ł��Ȃ��悤�ɂ���
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	//�^�C�g����\��
	SetMainWindowText(TITLE);

	//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
	SetGraphMode(WinWidth, WinHeight, 32);

	//��ʃT�C�Y��ݒ�(�𑜓x�Ƃ̔䗦�Őݒ�)
	SetWindowSizeExtendRate(1.0);

	//��ʂ̔w�i�F��ݒ�
	SetBackgroundColor(0, 0, 0);

	Scene_Manager* scene_Manager;
	scene_Manager->Change_Scene(scene_Manager->TITLE);




	KeyInput keyInput;

	//DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		//�G���[���o����}�C�i�X�l��Ԃ��ďI��
		return -1;
	}

		scene_Manager->Init();

	//�i�v���[�v�𔲂��鏈��
	while (1)//�ȒP�ȃ��[�v����
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
		WaitTimer(20);//20�~���b
		if (ProcessMessage() == -1) break;//WindowsAPI�̃G���[����
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break;//DxLib�̓��͏���
	}

	//�����������܂őҋ@
	WaitKey();

	//Dx���C�u�����I������
	DxLib_End();

	return 0;
}