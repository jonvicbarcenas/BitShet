#include "bitset.h"

void initialize(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		s[i]= 0;
	}
}


void add(int elem,BitSet s){
	int i;
	int num;
	for(i=0; i<elem; i++){
		s[elem] = 1;
	}
}


void display(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		printf("%d ", s[i]);
	}
	
}


void getUnion(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] || s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


void intersection(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] && s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


void difference(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] && !s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


int isEmpty(BitSet s){
	int result=1;
	int i;
	for(i=0; i<MAX; i++){
		if(s[i] == 0){
			result[i] = 0;
		}
	}
	return result; 
	
	// true = 0
	// false = 1
}


int contains(BitSet s,int elem){
	
	
}


int disjoint(BitSet s1,BitSet s2){
	
	
}


int equal(BitSet s1,BitSet s2){
	
	
}


int cardinality(BitSet s){
	
	
}


int subset(BitSet s1,BitSet s2){
	
	
	
}
