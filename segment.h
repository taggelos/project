#ifndef SEGMENT_H
#define SEGMENT_H
#include "car.h"
#include "entrance.h"
#include <string>
using namespace std;

class Car;
class Entrance;
class Segment{
	Entrance* entry;
	Car* cars;
	int numcars;
	Segment* next;
	Segment* prev;
	public:
		Segment();
		~Segment();
};

#endif