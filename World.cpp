#include "World.h"
#include <fstream>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Wall.h"
#include "Floor.h"
#include <vector>
#include <string>
#include <iostream>
UWorld::UWorld()
{

}
UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}
void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}
void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}
void UWorld::Load(std::string MapName)
{
	int ECounter = 0;
	std::fstream MapStream(MapName);
	int Y = 0;
	while (!MapStream.eof())
	{
		std::string Line;

		std::getline(MapStream, Line);
		for (int X = 0; X < Line.length(); ++X)
		{
			if (Line[X] == '*')
			{
				SpawnActor<AWall>()->SetActorLocation(X, Y);
				std::cout << Line[X];
				ECounter = ECounter +1;
				if (ECounter == Line.length())
				{
					std::cout << std::endl;
					ECounter = 0;
				}
			}
			else if (Line[X] == ' ')
			{
				SpawnActor<AFloor>()->SetActorLocation(X, Y);
				std::cout << Line[X];
				ECounter = ECounter + 1;
				if (ECounter == Line.length())
				{
					std::cout << std::endl;
					ECounter = 0;
				}
			}
			else if (Line[X] == 'P')
			{
				SpawnActor<APlayer>()->SetActorLocation(X, Y);
				std::cout << Line[X];
				ECounter = ECounter + 1;
				if (ECounter == Line.length())
				{
					std::cout << std::endl;
					ECounter = 0;
				}
			}
			else if (Line[X] == 'M')
			{
				SpawnActor<AMonster>()->SetActorLocation(X, Y);
				std::cout << Line[X];
				ECounter = ECounter + 1;
				if (ECounter == Line.length())
				{
					std::cout << std::endl;
					ECounter = 0;
				}
			}
			else if (Line[X] == 'G')
			{
				SpawnActor<AGoal>()->SetActorLocation(X, Y);
				std::cout << Line[X];
				ECounter = ECounter + 1;
				if (ECounter == Line.length())
				{
					std::cout << std::endl;
					ECounter = 0;
				}
			}
		}
		Y++;
	}
	MapStream.close();
}