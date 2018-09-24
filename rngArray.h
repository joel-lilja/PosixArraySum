//Joel Lilja
//Header file for library that generates an N sized array filled with random integers. 

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


//Returns a pointer to a filled integer array
int * genArray(uint64_t size); 

//Returns a pointer to a filled integer array
//Need min/max integer values 
int* genBoundArray(uint64_t size, int minVal, int maxVal);

//prints array given size and pointer to array
void printArray(int * array, uint64_t size);
	
//print sum of array given pointer an dsize
//Used for debugging purposes.

uint64_t sumArray(int * array, uint64_t size);
