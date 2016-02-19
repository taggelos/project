#include <iostream>
#include <stdio.h>  
#include <stdlib.h> 
#include "motorway.h"


//g++ -o yo main.cpp motorway.cpp toll.cpp segment.cpp entrance.cpp car.cpp

int main(int argc, char* argv[]){
	int N=atoi(argv[1]),NSegs= atoi(argv[2]),K=atoi(argv[3]),Percent=atoi(argv[4]);
	Motorway motorway(NSegs);
	do{
		cout<<"yolo"<<endl;
		N--;
	}while(N>0);

	return 0;
}