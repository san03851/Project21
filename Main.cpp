#include <iostream>
#include "Engine.h"
#include "World.h"
#include "Actor.h"
#include "Player.h"
#include <fstream>

using namespace std;

class Singleton
{
private:
	Singleton()
	{

	}

	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Singleton();
		}

		return Instance;
	}
};
Singleton* Singleton::Instance = nullptr;

int main()
{
	//GEngine->GetInstance();
	//GEngine->GetWorld()->Load("Map.txt");
	//GEngine->Run();
	UEngine* MyEngine = new UEngine();

	MyEngine->GetWorld()->Load("Map.txt");

	MyEngine->Run();

	delete MyEngine;
	return 0;
}