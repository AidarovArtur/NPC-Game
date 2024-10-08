#include "NPC.h"
#include <iostream>
#include <string>

using namespace std;

// NPC() constructor assigns the following default values to class data members
// name: Jimothy
// occupation: Guide
// level: 1
// Health: 1
NPC::NPC()
{
	name = "Jimothy";
	occupation = "Guide";
	level = 1;
	health = 1;
}

// Define all the class member functions.
// While defining member functions, note that these functions will be called using 
// an 'NPC' object which will represent one NPC.
// Example:  NPC p[10]; creates 10 NPC objects
// p[2].setLevel(19); will set 3rd NPC's level to 19

// setName assigns 'name_input' to class data member 'name'
void NPC::setName(string nameInput)
{
	name = nameInput;
}

// setOccupation assigns 'occupationInput' to class data member 'occupation'
void NPC::setOccupation(string occupationInput)
{
	occupation = occupationInput;
}

// setLevel assigns level_input to class data member 'level'
void NPC::setLevel(int levelInput)
{
	level = levelInput;
}

// setHealth assigns 'health_input' to class data member 'health'
void NPC::setHealth(int healthInput)
{
	health = healthInput;
}

// getName returns the class data member 'name'.
string NPC::getName()
{
	return name;
}

// getOccupation returns the class data member 'occupation'.
string NPC::getOccupation()
{
	return occupation;
}

// getLevel returns the class data member 'level'.
int NPC::getLevel()
{
	return level;
}

// getHealth returns the class data member 'health'.
int NPC::getHealth()
{
		return health;
}

// Provided function
// displayNPC displays the name, occupation, level, and health of the NPC
void NPC::displayNPC()
{
	// Write the code below
	cout << "Name: " << name << endl;
	cout << "Occupation: " << occupation << endl;
	cout << "Level: " << level << endl;
	cout << "Health: " << health << endl;
}
