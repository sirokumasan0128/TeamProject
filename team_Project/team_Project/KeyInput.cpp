#include<DxLib.h>
#include<iostream>
#include "KeyInput.h"


void KeyInput::update()
{
	for (int i = 0; i < 256; i++)
	{
		oldkey[i] = currentkey[i];
	}
	GetHitKeyStateAll(currentkey);
	
}

bool KeyInput::InputKeyTrigger(int key)
{
	return (currentkey[key] == 1 && oldkey[key] == 0);

}
