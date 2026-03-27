#pragma once

class AActor
{
public:
	AActor(int InX=0, int InY=0, char Mesh=' ');
	virtual ~AActor();

	virtual void Init();
	virtual void Tick();
	virtual void Render();
	void SetActorLocation(int NewX, int NewY);
	void Move();
protected:
	int X;
	int Y;
	char InMesh;
};

