#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "toll.h"
#include <string>

using namespace std;

class Tollregular;
class Tollelectro;
class Entrance{
	string name;
	Tollregular* tollreg;
	Tollelectro* tollelec;
	public:
		Entrance();
		~Entrance();
};



#endif