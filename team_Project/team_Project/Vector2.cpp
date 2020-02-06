#include "Vector2.h"
#include <cmath>

Vector2::Vector2()
	:x(0), y(0)
{
}

Vector2::Vector2(int _x, int _y)
	: x(_x), y(_y)
{
}

float Vector2::length(const Vector2& v)
{
	return std::sqrt(x*x + y * y);
}

int Vector2::dot(const Vector2 & v)
{
	return x * v.x + y * y*v.y;
}

int Vector2::cross(const Vector2& v)
{
	return v.x * v.y - v.x * v.y;
}


//������Z�q�I�[�o�[���[�h
Vector2 & Vector2::operator+=(const Vector2 & v)
{
	x += v.x;
	y += v.y;
	return *this;
}

Vector2 & Vector2::operator-=(const Vector2& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

Vector2 & Vector2::operator*=(float s)
{
	x *= s;
	y *= s;
	return *this;
}

Vector2 & Vector2::operator/=(float s)
{
	x /= s;
	y /= s;
	return *this;
}

const Vector2 operator +(const Vector2 & v1, const Vector2 & v2)
{
	Vector2 temp(v1);
	temp += v2;
	return temp;
}

const Vector2 operator -(const Vector2 & v1, const Vector2 & v2)
{
	Vector2 temp(v1);
	temp -= v2;
	return temp;
}

const Vector2 operator *(const Vector2 & v, float s)
{
	Vector2 temp(v);
	temp *= s;
	return temp;
}

const Vector2 operator*(float s, const Vector2 & v)
{
	return Vector2();
}

const Vector2 operator/(const Vector2 & v, float s)
{
	return Vector2();
}


//const Vector2 operator + (float s, const Vector2 & v)
//{
//
//}
