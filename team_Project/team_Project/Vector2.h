#pragma once

struct Vector2
{
	int x,
		y;

	//コンストラクタ
	Vector2();
	Vector2(int _x, int _y);

	///長さ
	float length(const Vector2& v);

	//内積
	int dot(const Vector2& v);

	//外積
	int cross(const Vector2& v);
	
	//代入演算子オーバロード
	Vector2& operator+= (const Vector2& v);
	Vector2& operator-= (const Vector2& v);
	Vector2& operator*= (float s);
	Vector2& operator/= (float s);

};

const Vector2 operator + (const Vector2& v1, const Vector2& v2);
const Vector2 operator - (const Vector2& v1, const Vector2& v2);
const Vector2 operator * (const Vector2& v, float s);
const Vector2 operator + (float s, const Vector2& v);
const Vector2 operator + (const Vector2& v, float s);
