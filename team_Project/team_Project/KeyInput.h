#pragma once


extern int key[256];

class KeyInput
{
public:
	void update();
	bool InputKeyTrigger(int key);


private:
	char currentkey[256];
	char oldkey[256];
};