#pragma once
#include "Actor.h"
class AGoal :
    public AActor
{
public:
    AGoal(int InX= 10, int InY=10, char Mesh='G');
    virtual ~AGoal();
};

