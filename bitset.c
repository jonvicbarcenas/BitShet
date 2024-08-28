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

void display(BitSet s) {
    int i;
    for (i = 0; i < MAX; i++) {
        if (s[i] == 1) {
            printf("\033[0;32m[%d] \033[0m", s[i]); 
        } else {
            printf("[%d] ", s[i]); 
        }
    }
}

//void display(BitSet s){
//	int i;
//	for(i=0; i<MAX; i++){
//		printf("[%d] ", s[i]);
//	}
//	
//}

//void display(BitSet s){
//    int i;
//    for(i = 0; i < MAX; i++){
//        if(s[i] == 1) {
//            printf("[%d] ", i);
//        }
//    }
//    printf("\n");
//}



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
	int i, result = 1; 
    for (i = 0; i < MAX; i++) {
        if (s[i] != 0) {
            result = 0; 
            break;
        }
    }
    return result; 
}


int contains(BitSet s, int elem) {
    if (elem >= 0 && elem < MAX) {
        return s[elem];
    }
    return 0; 
}

int disjoint(BitSet s1, BitSet s2) {
    int i;
    int result = 1;
    for(i = 0; i < MAX; i++) {
        if (s1[i] && s2[i]) {
            result = 0; 
            break;
        }
    }
    return result; 
}

int equal(BitSet s1, BitSet s2) {
    int i, result = 1;
    for(i = 0; i < MAX; i++) {
        if (s1[i] != s2[i]) {
            result = 0; 
            break;
        }
    }
    return result;
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
            result = 0; 
            break;
        }
    }
    return result; 
}




