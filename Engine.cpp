#include "Engine.h"
#include "World.h"
#include <conio.h>
#include "Actor.h"

UEngine* UEngine::Instance = nullptr;
int UEngine::KeyCode = 0;

UEngine::UEngine()
{
	Init();
}
UEngine::~UEngine()
{
	Term();
}

void UEngine::Init()
{
	ConditionNotOver = true;
	World = new UWorld;
}
void UEngine::Tick()
{
	World->Tick();
}
void UEngine::Render()
{
	World->Render();
}
void UEngine::Input()
{
	KeyCode = _getch();
}
void UEngine::Run()
{
	while (ConditionNotOver)
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Term()
{
	delete World;
	World = nullptr;
}
