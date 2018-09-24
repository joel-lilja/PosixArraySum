//Joel Lilja
//Test bed for N thread array Summation library




#include <stdlib.h>
#include <stdio.h>
#include "rngArray.h"
int main(int argc, char ** argv){


	int size = 10; 
	int * testArray = genBoundArray(size, 1, 10);
	printArray(testArray, size); 
	uint64_t sum = sumArray(testArray, size); 
	printf("Sum: %lu\n", sum); 


}
