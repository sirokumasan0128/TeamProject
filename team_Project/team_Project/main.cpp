#include "DxLib.h"
//�V�[���n
#include"Title.h"
#include"Stage1.h"

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

	enum Scene {
		TITLE_SCENE,
		STAGE1_SCENE,
		END_SCENE,
	};

	Scene scene = TITLE_SCENE;

	Title title;
	Stage1 stage1;
	KeyInput keyInput;

	//DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		//�G���[���o����}�C�i�X�l��Ԃ��ďI��
		return -1;
	}
	switch (scene)
	{
	case TITLE_SCENE:
		title.Title_Init();
		if (title.GetIsGame_Start() == true)
		{
			scene = STAGE1_SCENE;
		}
		break;
	case STAGE1_SCENE:
		break;
	}


	//�i�v���[�v�𔲂��鏈��
	while (1)//�ȒP�ȃ��[�v����
	{

		ClearDrawScreen();
		
		switch (scene)
		{
		case TITLE_SCENE:
			title.Title_Update();
			title.Title_Draw();
			if (title.GetIsGame_Start() == true)
			{
				scene = STAGE1_SCENE;
			}
			break;
		case STAGE1_SCENE:
			stage1.Stage1_MapDate();
			break;
		}


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