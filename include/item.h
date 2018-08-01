#ifndef ITEM
#define ITEM

class Item{
private:
	int item_id;
public:
	Item(int);

	int get_item_id();
	void set_item_id(int);
};

#endif