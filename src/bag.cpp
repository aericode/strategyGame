#include "bag.h"
#include "item.h"
#include <vector>
#include <iostream>

Bag::Bag(unsigned int sz){size = sz;}

bool Bag::full(){
	return(inside.size()>=size);
}

void Bag::add_item(Item* item,int quantity){
	if(this->full()){
		std::cout<<"Bag full, can't add anything."<<std::endl;
		return;
	}
	slot* add_me = new slot;
	add_me->stored = item;
	add_me->quantity = quantity;

	inside.push_back(*add_me);

}