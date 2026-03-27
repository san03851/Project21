#pragma once
#include "Actor.h"
class AMonster :
    public AActor
{
public:
    AMonster(int InX=5, int InY=5, char Mesh='M');
    virtual ~AMonster();
};

