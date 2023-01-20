#pragma once
class TestSingletion
{
private:
	TestSingletion() {};
	~TestSingletion() {};
	int sceneNo = 1;
public:
	TestSingletion(const TestSingletion& obj) = delete;
	TestSingletion& operator=(const TestSingletion& obj) = delete;
	static TestSingletion* GetInstance();
	void ChangeScene(char* key, char* oldkey);
};

