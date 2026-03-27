#include "Actor.h"
#include <iostream>
#include <Windows.h>

AActor::AActor(int InX, int InY, char Mesh) : X(InX), Y(InY), InMesh(Mesh)
{

}
AActor::~AActor()
{

}

void AActor::Init()
{

}
void AActor::Tick()
{

}
void AActor::Render()
{
	COORD Coordinate;
	Coordinate.X = X;
	Coordinate.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate);

	std::cout << InMesh;
}
void AActor::SetActorLocation(int NewX, int NewY)
{
	X = NewX;
	Y = NewY;
}

void AActor::Move()
{

}