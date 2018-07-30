#include "map.h"
#include <iostream>

Map::Map(int w, int h) : width(w),height(h){
	cells = new int*[height];
		for(int i = 0; i <width; i++){
			cells[i] = new int[width];
		}
}

Map::~Map(){
	for(int i = 0; i < height; i++){
		delete cells[i];
	}
	delete cells;
}


void Map::init(){
	for (int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			cells[i][j] = i+j;
		}
	}
}


void Map::print(){
	for (int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			std::cout<<cells[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
}