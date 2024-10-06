#include "player.h"
#ifndef _WARRIOR_H
#define _WARRIOR_H
class Warrior : public Player {
  public: 
    Warrior(string name, int level, playerType archetype) : Player(name, level, archetype) {};

    virtual void displayPlayer();
};

#endif // _WARRIOR_H
