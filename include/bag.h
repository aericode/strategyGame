#ifndef BAG
#define BAG
#include "item.h"
#include <vector>

struct slot{
	Item* stored;
	int quantity;
};

class Bag{
private:
	std::vector<slot> inside;
	unsigned int size;
public:
	Bag(unsigned int);

	Bag(unsigned int, int*, int*);

	void add_item(Item*, int);
	void drop_item(int, int);
	Item* get_item(int);
	Item* pick_item(int);

	bool full();

};



#endif