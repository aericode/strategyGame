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
				std::cout<<second->get_name()<<" matou "<<first->get_name()<<std::endl;
			}
		}else{
			end = true;
			std::cout<<first->get_name()<<" matou "<<second->get_name()<<std::endl;
		}
		count++;
		if(count >=30){
			std::cout<<first->get_name()<<" e "<< second->get_name()<< " reconhecem a força de seu oponente, a luta para, e eles questionam se vale a pena continuar"<<std::endl;
		}
	}
}