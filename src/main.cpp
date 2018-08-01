#include <iostream>
#include "player.h"
#include "map.h"
#include "combat.h"
#include "bag.h"
#include "item.h"

int main(){
/*
	Player eu(10,10,10,10);
	Player vc(5,10,7,3);

	eu.set_name("Cadu");
	vc.set_name("John Wick");

	Combat(&eu,&vc);
*/

Bag bog(15);
Item espada(150);

bog.add_item(&espada, 1);
std::cout<<bog.get_item(150)->get_item_id()<<std::endl;


//	Map mesa(5,5);
//	mesa.init();
//	mesa.print();
}