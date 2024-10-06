#include "player.h"
#ifndef _ROGUE_H
#define _ROGUE_H
class Rogue : public Player {
  public: 
    Rogue(string name, int level, playerType archetype) : Player(name, level, archetype) {};

    virtual void displayPlayer();
};
#endif // _ROGUE_H
