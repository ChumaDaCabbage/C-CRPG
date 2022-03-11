#pragma once
class World; //Temp world to be able to pass in world

#include <iostream>
using std::string;

class Player
{
public:

	string Name = ""; //Will hold the players name
	int Xpos = 0;
	int Ypos = 0;

	//Class interaction test (Still here for future reference)
	void ClassInteractionTest(World world);
};

