#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
using namespace std;

enum playerType { warrior = 0, wizard, rogue };	// definition of playerType

class Player {
private:
	string name; // private data members
	int health;
	int mana;
	int armor;
	int magicResist;
	int attack;
	int magicAttack;
	int level;
	playerType archetype;

public:
	Player(string playerName, int levelInput, playerType archetypeInput); // constructor

	// accessor methods
	string getName();
	int getHealth();
	int getMana();
	int getArmor();
	int getMagicResist();
	int getAttack();
	int getMagicAttack();
	int getLevel();
	playerType getPlayerType();

	virtual void displayPlayer()
	{}

	// Declare a friend function named updateLevel() which has 2 parameters and no return value.
	// The first parameter is a pointer to an instance of the Player class
	// The second is an int that represents the new level. Other attributes will be based on the playerType and level.
	void updateLevel(Player* player, int level);

};

#endif // _PLAYER_H_
