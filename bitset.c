#include <stdio.h>
#include "bitset.h"

void initialize(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		s[i]= 0;
	}
}


//void add(int elem,BitSet s){
//	int i;
//	int num;
//	for(i=0; i<elem; i++){
//		s[elem] = 1;
//	}
//}

void add(int elem, BitSet s){
    if (elem >= 0 && elem < MAX) {
        s[elem] = 1;
    }
}



void display(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		printf("[%d] ", s[i]);
	}
	
}


void getUnion(BitSet result, BitSet s1, BitSet s2) {
    int i;
    for (i = 0; i < MAX; i++) {
        result[i] = s1[i] || s2[i];
    }
}


void intersection(BitSet result, BitSet s1, BitSet s2) {
    int i;
    for (i = 0; i < MAX; i++) {
        result[i] = s1[i] && s2[i];
    }
}


void difference(BitSet result, BitSet s1, BitSet s2) {
    int i;
    for (i = 0; i < MAX; i++) {
        result[i] = s1[i] && !s2[i];
    }
}


int isEmpty(BitSet s) {
	int i, result = 1; //1 empty
    for (i = 0; i < MAX; i++) {
        if (s[i] != 0) {
            result = 0; // Not empty
            break;
        }
    }
    return result; // Empty, 
}


int contains(BitSet s, int elem) {
    if (elem >= 0 && elem < MAX) {
        return s[elem];
    }
    return 0; // false, element not in set
}

int disjoint(BitSet s1, BitSet s2) {
    int i;
    int result = 1;
    for(i = 0; i < MAX; i++) {
        if (s1[i] && s2[i]) {
            result = 0; // false, not disjoint
            break;
        }
    }
    return result; // true, disjoint
}

int equal(BitSet s1, BitSet s2) {
    int i, result = 1;
    for(i = 0; i < MAX; i++) {
        if (s1[i] != s2[i]) {
            result = 0; // false, not equal
            break;
        }
    }
    return result; // true, equal
}

int cardinality(BitSet s) {
    int i, count = 0;
    for(i = 0; i < MAX; i++) {
        if (s[i] == 1) {
            count++;
        }
    }
    return count;
}

int subset(BitSet s1, BitSet s2) {
    int i, result = 1;
    for(i = 0; i < MAX; i++) {
        if (s1[i] && !s2[i]) {
            result = 0; // false, s1 is not a subset of s2
            break;
        }
    }
    return result; // true, s1 is a subset of s2
}
