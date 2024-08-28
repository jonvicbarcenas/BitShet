#include <stdio.h>
#include <stdlib.h>
#include "bitset.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    BitSet s1, s2, result;

    // Init
    initialize(s1);
    initialize(s2);
    initialize(result);

    // Add SEt s1
    add(1, s1);
    add(2, s1);
    add(3, s1);
    printf("s1: \t\t\t\t");
    display(s1);
    printf("\n");

    // SET s2
    add(2, s2);
    add(3, s2);
    add(4, s2);
    printf("s2: \t\t\t\t");
    display(s2);
	printf("\n");

    // Union s1 || s2
    getUnion(result, s1, s2);
    printf("\nUnion of s1 and s2: \t\t");
    display(result);

    // Intersection s1 && s2
    intersection(result, s1, s2);
    printf("\nIntersection of s1 and s2: \t");
    display(result);

    // Difference between s1 && !s2 
    difference(result, s1, s2);
    printf("\nDifference (s1 - s2): \t\t");
    display(result);



    printf("\n\nIs s1 empty?:"); 
    if (isEmpty(s1) == 1) 
        printf("\t\t\t\033[0;32mYes\033[0m\n"); 
    else 
        printf("\t\t\tNo\n"); 
    
    

    printf("Does s1 contain 3?: ");
    if ( contains(s1, 3) == 1) 
        printf("\t\t\033[0;32mYes\033[0m\n"); 
    else 
        printf("\t\tNo\n"); 



    printf("Are s1 and s2 disjoint?: ");
    if (disjoint(s1, s2) == 1) 
        printf("\t\033[0;32mYes\033[0m\n"); 
    else 
        printf("\tNo\n");
    


    printf("Are s1 and s2 equal?: ");
        if (equal(s1, s2) == 1) 
        printf("\t\t\033[0;32mYes\033[0m\n"); 
    else 
        printf("\t\tNo\n");
    

    // Find the cardinality of s1
    printf("Cardinality of s1: \t\t%d\n", cardinality(s1));
    


    printf("Is s1 a subset of s2?: ");
    if (subset(s1, s2) == 1) 
        printf("\t\t\033[0;32mYes\033[0m\n"); 
    else 
        printf("\t\tNo\n");
    
	return 0;
}


