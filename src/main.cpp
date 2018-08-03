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
//int ids[] = {1,2,3,4,5,6};
//int qts[] = {1,1,1,1,1,1};

//Bag bog(15,ids,qts);
//Item espada(150);

Player eu(10,10,10,10);
eu.fabricate(1);


//bog.add_item(&espada, 1);
//std::cout<<bog.pick_item(3)->get_item_id()<<std::endl;


//	Map mesa(5,5);
//	mesa.init();
//	mesa.print();
}