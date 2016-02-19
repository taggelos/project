#include <iostream>
#include "segment.h"

using namespace std;


 Segment::Segment(int n){
 	int count=0;
 	cars=new Car*[n];
 	for(int i=0;i<n;i++){ //dhmiourgia 0-5 autokinhtwn
		cars[i] = new Car();
		count++;
	}
 	cout<<"Ένα Segment δημιουργήθηκε"<<endl;
 	cout<<count<<" αυτοκίνητα σε αυτό το Segment"<<endl;
}

Segment::~Segment(){
	cout<<"Καταστροφή Segment"<<endl;
}

