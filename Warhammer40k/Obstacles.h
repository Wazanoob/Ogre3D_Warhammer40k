#pragma once
#include "Actors.h"

class GameEngine;

class Obstacles : public Actors
{
public:
	/* The scale always needs to be positive. */
	Obstacles(GameEngine &gameEngineP, Vector2 gridCoordsP, Vector3 scaleP, std::string ID);
	~Obstacles();

	void UpdateCollisions(Grid &gridP, bool OnFlipP = false);
	void FlipCollisions(Grid &gridP);

private:
	bool mOnFlip = false;
	Vector3 mScale;
	Vector2 mGridCoords;
};

