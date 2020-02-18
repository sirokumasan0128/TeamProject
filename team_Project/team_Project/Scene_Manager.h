#pragma once

//‘O•ûQÆ
class Base_Scene;

class Scene_Manager
{
private:
	static Base_Scene* m_pScene_1;
public:
	enum Scene {
		TITLE,
		STAGE1,
	};

	static void Change_Scene(Scene scene);
	static void Init();
	static void Update();
	static void Draw();
	static void Finish();
};

