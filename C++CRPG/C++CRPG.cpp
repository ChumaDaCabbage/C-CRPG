// C++CRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "World.h"
#include "Player.h"
using std::cout;
using std::cin;
using std::string;

int main()
{
    Player player = Player(); //Makes player
    string input = ""; //Will hold player input
    World world = World(); //Creates world

    //Gets player name
    cout << "What is your name? > ";
    cin >> input;
    player.Name = input;

    //Welcomes player
    cout << "Welcome " << player.Name << "!\n";

    //Game loop
    while (true)
    {
        //Gets input
        cout << "What do you want to do? > ";
        cin >> input;

        //Reacts to input
        inputHandler(input);
    }
}

void inputHandler(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        input[i] = tolower(input[i]);
    }

    cout << input;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
