#pragma once

#include "Location.h"

class World
{
public:
	const static int MAX_WORLD_X = 50;
	const static int MAX_WORLD_Y = 50;
	Location locations[MAX_WORLD_X][MAX_WORLD_Y]{};

	World();
};

