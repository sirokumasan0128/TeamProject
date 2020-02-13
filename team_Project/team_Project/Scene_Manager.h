#pragma once
#include"Player.h"
//#include"Base_Scene.h"
//�O���Q��
class Base_Scene;

class Scene_Manager
{
public:

	enum Scene {
		TITLE,
		STAGE1,
	};


	static void Change_Scene(Scene scene);//�V�[���������ɂ���ĕς���
	static void Init();     //���݂̃V�[���̏�����
	static void Update();                 //���݂̃V�[���̕`��
	static void Draw();                   //���݂̃V�[���̕`��֐�
	static void Finish();                 //���݂̃V�[���̏I������

private:
	static Base_Scene* m_pScene_1;          //���݂̃V�[��(���C���[1)

};

