#ifndef MOTORWAY_H
#define MOTORWAY_H
#include "segment.h"
#include <string>

using namespace std;

class Motorway{
	//Segment* segs;
	Segment** segs;
	int numcars;
	public:
		Motorway(int s);
		~Motorway();
};


#endif