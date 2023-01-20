#include "TestSingletion.h"
#include "DxLib.h"

TestSingletion* TestSingletion::GetInstance()
{
	static TestSingletion instance;
	return&instance;
}
void TestSingletion::ChangeScene(char* key, char* oldkey)
{
	if (key[KEY_INPUT_SPACE] == 1 && oldkey[KEY_INPUT_SPACE] == 0)
	{
		sceneNo += 1;
		if (sceneNo > 4)
		{
			sceneNo = 1;
		}

	}
	DrawFormatString(0, 0, GetColor(255, 255, 255), "sceneNo=%d", sceneNo);
}

