#ifndef CAR_H
#define CAR_H
#include "segment.h"
#include <string>
using namespace std;

class Segment;
class Car{
	Segment* exit;
	Segment* now;
	public:
		Car();
		~Car();
};

#endif