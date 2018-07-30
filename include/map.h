#ifndef MAP
#define MAP

class Map{
private:
	int width;
	int height;
	int ** cells;
public:
	//constructors & destructors
	Map(int,int);
	~Map();

	void print();
	void init();
};


#endif