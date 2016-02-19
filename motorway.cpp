#include <iostream>
#include "motorway.h"

using namespace std;

Motorway::Motorway(int s){
	segs=new Segment*[s];
	srand(time(NULL));
	for(int i=0;i<s;i++){ //dhmiourgia s segments
		segs[i] = new Segment(rand()%6);
	}
	cout<<"Αυτοκινητόδρομος σε λειτουργία"<<endl;
}

Motorway::~Motorway(){
}
