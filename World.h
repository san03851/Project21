#pragma once
#include <fstream>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Wall.h"
#include "Floor.h"
#include <vector>
#include <string>

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();
	void Tick();
	void Render();
	void Load(std::string MapName);
	template<typename T> AActor* SpawnActor()
	{
		AActor* NewActor = new T;
		Actors.push_back(NewActor);
		return NewActor;
	}
	
protected:

	std::vector<class AActor*> Actors;
};

