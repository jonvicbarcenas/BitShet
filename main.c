#include <stdio.h>
#include <stdlib.h>
#include "bitset.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    BitSet s1, s2, result;

    // Initialize sets
    initialize(s1);
    initialize(s2);
    initialize(result);

    // Add elements to s1
    add(1, s1);
    add(2, s1);
    add(3, s1);
//    printf("s1: ");
//    display(s1);

    // Add elements to s2
    add(2, s2);
    add(3, s2);
    add(4, s2);
//    printf("s2: ");
//    display(s2);

    // Union of s1 and s2
    getUnion(result, s1, s2);
    printf("Union of s1 and s2: ");
    display(result);

    // Intersection of s1 and s2
    intersection(result, s1, s2);
    printf("\nIntersection of s1 and s2: ");
    display(result);

    // Difference between s1 and s2 (s1 - s2)
    difference(result, s1, s2);
    printf("Difference (s1 - s2): ");
    display(result);

    // Check if s1 is empty
    printf("Is s1 empty? %s\n", isEmpty(s1) ? "Yes" : "No");

    // Check if s1 contains 3
    printf("Does s1 contain 3? %s\n", contains(s1, 3) ? "Yes" : "No");

    // Check if s1 and s2 are disjoint
    printf("Are s1 and s2 disjoint? %s\n", disjoint(s1, s2) ? "Yes" : "No");

    // Check if s1 and s2 are equal
    printf("Are s1 and s2 equal? %s\n", equal(s1, s2) ? "Yes" : "No");

    // Find the cardinality of s1
    printf("Cardinality of s1: %d\n", cardinality(s1));

    // Check if s1 is a subset of s2
    printf("Is s1 a subset of s2? %s\n", subset(s1, s2) ? "Yes" : "No");
    
	return 0;
}


