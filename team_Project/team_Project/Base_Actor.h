#pragma once
class Base_Actor
{
private:



public:
	Base_Actor();
	int pos_X;//現在の座標X
	int	pos_Y;//現在の座標Y
	int velocity_X;//移動量X
	int velocity_Y;//移動量Y
	bool isDead;//プレイヤーしかないけど死亡フラグ
	bool isHit;//キャラクタの当たったか判定フラグ

	virtual void Init();
	virtual void Update();//objectごとに可変にしたい
	virtual void Draw();//可変
	virtual void Finish();//可変

	~Base_Actor();

	
};

