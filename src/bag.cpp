#include "bag.h"
#include "item.h"
#include <vector>
#include <iostream>
#include <iterator>

Bag::Bag(unsigned int sz){size = sz;}

Bag::Bag(unsigned int sz,int* item_id_list, int* item_quantity_list){
	size = sz;
	for(unsigned int i=0;i<size;i++){
		Item * add_me = new Item ( item_id_list[i] );
		add_item(add_me, item_quantity_list[i]);
	}
}

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

Item* Bag::get_item(int item_id){
	for(unsigned int i=0;i<inside.size();i++){
		if(inside[i].stored->get_item_id() == item_id)return inside[i].stored;
	}
	return nullptr;
}

Item* Bag::pick_item(int item_id){
	for(unsigned int i=0;i<inside.size();i++){
		if(inside[i].stored->get_item_id() == item_id){
			Item* aux = inside[i].stored;
			inside.erase(inside.begin() + i);
			return aux;
		}
	}
	return nullptr;
}