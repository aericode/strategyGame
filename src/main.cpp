#include <iostream>
#include "player.h"
#include "map.h"
#include "combat.h"

int main(){

	Player eu(10,10,10,10);
	Player vc(5,10,7,3);

	eu.set_name("Cadu");
	vc.set_name("John Wick");

	Combat(&eu,&vc);



//	Map mesa(5,5);
//	mesa.init();
//	mesa.print();
}