#include<DxLib.h>
#include<iostream>
#include "KeyInput.h"

int key[256];

void KeyInput::InputKey()
{

	static char buf[256];
	GetHitKeyStateAll(buf);
	for (int i = 0;i < 256;i++)
	{
		if (buf[i])
		{
			if (key[i] == 0)
			{
				key[i] = 1;
			}
			else if (key[i] == 1)
			{
				key[i] = 2;
			}
		}
		else
		{
			key[i] = 0;
		}
	}
}
