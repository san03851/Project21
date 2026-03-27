#pragma once
#include <iostream>
#include <vector>
class AActor;
class UWorld;

class UEngine
{
protected:
	bool ConditionNotOver = true;
	static UEngine* Instance;
	class UWorld* World;
public:
	UEngine();
	~UEngine();
	static UEngine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new UEngine();
		}

		return Instance;
	}
	void Init();
	void Tick();
	void Render();
	void Run();
	void Input();
	static int KeyCode;
	void Term();
	inline UWorld* GetWorld()
	{
		return World;
	}
};
#define GEngine			UEngine::GetInstance()
