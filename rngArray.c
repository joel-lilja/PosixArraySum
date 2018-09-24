//Joel Lilja
//Library to generate a N sized rng array. 

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

//generate array of ints using size to determine length
int * genArray(uint64_t size){
	srand(time(0));	
	int * array = malloc(sizeof(int) * size);
	for(int i = 0; i < size; i++){
		array[i] = rand(); 
	}

	return array; 
}

int * genBoundArray(uint64_t size, int minVal, int maxVal){
	srand(time(0));	
	int * array = malloc(sizeof(int) * size);
	for(int i = 0; i < size; i++){
		array[i] = (rand() % (maxVal + 1 - minVal) + minVal); 
	}

	return array; 


}


//dump array to stdout for debugging purposes
void printArray(int * array, uint64_t size ){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n"); 
}




uint64_t sumArray(int * array, uint64_t size){
	uint64_t total = 0; 
	for(int i = 0; i < size; i++){
		total += array[i];
	}

	return total; 
}


