#include <iostream>
#include "player.h"
#include "map.h"

int main(){
	/*
	Player eu(10,10,10,10);
	Player vc;

	eu.attack(&vc);
	*/


	Map mesa(5,5);
	mesa.init();
	mesa.print();
}