#ifndef ITEM
#define ITEM

struct StatusModification
{
	int value; 
	int status; //1.hp 2. attack 3.defense 4. speed
};

class Item{
private:
	int item_id;
	StatusModification effect;
public:
	Item(int);

	int get_item_id();
	void set_item_id(int);

	StatusModification get_status_modification();
	void set_status_modification(int, int);
};

#endif