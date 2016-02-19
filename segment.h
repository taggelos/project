#ifndef SEGMENT_H
#define SEGMENT_H
#include "car.h"
#include "entrance.h"
#include <string>
#include <cstdlib>//////////////////
#include <ctime>////////////////////rand
using namespace std;

class Car;
class Entrance;
class Segment{
	Entrance* entry;
	//Car* cars;
	Car** cars;
	int numcars;
	Segment* next;
	Segment* prev;
	public:
		Segment(int n);
		void setNext(Segment* n) {next = n;};
		void setPrev(Segment* n) {prev = n;};
		Segment* getPrev(){return prev;};
		~Segment();
};

class doubleLinkedList
{	
	Segment* front;
	Segment* back;
	public:
		doubleLinkedList()
		{  front = NULL; back = NULL; }
		~doubleLinkedList(){ destroyList();}
		void appendSegmentFront(int x);
		void appendSegmentBack(int x);
		//void dispNodesForward();
		//void dispNodesReverse();
		void destroyList();
};
#endif