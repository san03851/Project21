#include "Goal.h"
#include "Actor.h"
AGoal::AGoal(int InX, int InY, char Mesh)
{
	X = InX;
	Y = InY;
	InMesh = Mesh;
}
AGoal::~AGoal()
{

}