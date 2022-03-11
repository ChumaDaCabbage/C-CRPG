#include "World.h"

World::World()
{
	//Adds defualt location to all locations
	for (int i = 0; i < MAX_WORLD_X; i++)
	{
		for (int j = 0; j < MAX_WORLD_Y; j++)
		{
			locations[i][j] = Location();
		}
	}
}
