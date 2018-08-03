#include "item.h"
#include <list>
#include <random>

Item::Item(int id){	item_id = id; }

int Item::get_item_id(){return item_id;}

void Item::set_item_id(int id){item_id=id;}

StatusModification Item::get_status_modification(){return effect;}

void Item::set_status_modification(int _status,int _value){
	effect.status = _status;
	effect.value = _value;
}

static std::list<Item> Item::generate_items(int min,int max){

	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(min,max);

	int num_item = std::bind ( distribution, generator );

	std::list<Item> random_items;
	for (int i=0;i<num_item;i++){
		//random_items[i].effect.value =  
	}
	


}