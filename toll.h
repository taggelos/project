#ifndef TOLL_H
#define TOLL_H
#include <string>
#include "car.h"
using namespace std;

class Car;
class Tollbooth{     
	string name;
	Car* cars;//waiting cars

	public:
		Tollbooth();
		~Tollbooth();
};

class Tollregular : Tollbooth{
	
	public:
		Tollregular();
		~Tollregular();
};

class Tollelectro : Tollbooth{
	
	public:
		Tollelectro();
		~Tollelectro();
};

#endif