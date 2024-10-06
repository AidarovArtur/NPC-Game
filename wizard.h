#include "player.h"
#ifndef _WIZARD_H_
#define _WIZARD_H_

class Wizard : public Player {
  public: 
    Wizard(string name, int level, playerType archetype) : Player(name, level, archetype) {};

    virtual void displayPlayer();
};
	
#endif // _WIZARD_H_
