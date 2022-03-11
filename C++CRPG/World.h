#pragma once

#include "Location.h"

class World
{
public:
	const static int MAX_WORLD_X = 50; //Holds world max size in the x direction
	const static int MAX_WORLD_Y = 50; //Holds world max size in the y direction
	Location locations[MAX_WORLD_X][MAX_WORLD_Y]{}; //Holds all world locations

	//World constructor
	World();
};

