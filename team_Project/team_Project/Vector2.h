#pragma once

struct Vector2
{
	int x,
		y;

	//�R���X�g���N�^
	Vector2();
	Vector2(int _x, int _y);

	///����
	float length(const Vector2& v);

	//����
	int dot(const Vector2& v);

	//�O��
	int cross(const Vector2& v);
	
	//������Z�q�I�[�o���[�h
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
