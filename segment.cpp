#include <iostream>
#include "segment.h"

using namespace std;


 Segment::Segment(int n){
 	prev=next=NULL;
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


void doubleLinkedList::appendSegmentFront(int x)
  {
        Segment *n = new Segment(x);
        if( front == NULL)
        {
            front = n;
            back = n;
        }
        else
        {
            //front->prev = n;
            front->setPrev(n);
            //n->next = front;
            n->setNext(front);
            front = n;
        }
  }

  void doubleLinkedList::appendSegmentBack(int x)
  {
        Segment *n = new Segment(x);
        if( back == NULL)
        {
            front = n;
            back = n;
        }
        else
        {
            //back->next = n;
            back->setNext(n);
            //n->prev = back;
            n->setPrev(back);
            back = n;
        }
 
  }
 
 void doubleLinkedList::destroyList()
{
    Segment *T = back;
    while(T != NULL)
    {
        Segment *T2 = T;
        //T = T->prev;
        T=T->getPrev();
        delete T2;
    }
    front = NULL;
    back = NULL;
}