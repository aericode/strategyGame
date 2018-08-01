#include "item.h"

Item::Item(int id){	item_id = id; }

int Item::get_item_id(){return item_id;}

void Item::set_item_id(int id){item_id=id;}