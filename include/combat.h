#ifndef COMBAT
#define COMBAT
#include "player.h"

class Combat{
private:
	Player* first;
	Player* second;
public:
	Combat(Player*, Player*);

	void fight();


};



#endif