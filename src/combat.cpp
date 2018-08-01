#include "combat.h"
#include <iostream>

Combat::Combat(Player* a, Player* b){
	if(a->get_speed() > b->get_speed()){
		first = a;
		second = b;
	}else{
		first = b;
		second = a;
	}
	fight();
}

void Combat::fight(){
	bool end = false;
	int count = 0;
	while(!end){
		first->attack(second);
		if( !second->is_dead() ){
			second->attack(first);
			if (first->is_dead()){
				end = true;
				std::cout<<second->get_name()<<" killed "<<first->get_name()<<std::endl;
			}
		}else{
			end = true;
			std::cout<<first->get_name()<<" killed "<<second->get_name()<<std::endl;
		}
		count++;
		if(count >=30){
			std::cout<<first->get_name()<<" and "<< second->get_name()<< " recognize the strength in their oponnent, they stop and question if it's worth to go on with this"<<std::endl;
			end= true;
		}
	}
}