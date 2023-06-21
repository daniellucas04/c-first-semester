#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("int = %d", sizeof(int));
	printf("\nshort = %d", sizeof(short));
	printf("\nlong = %ld", sizeof(long));
	printf("\nchar = %d", sizeof(char));
	
	int arr[10];
	printf("\narr[10] = %d", sizeof(arr));
	
	int* memory = malloc(10*4);
	printf("\nmalloc = %p", sizeof(memory));
	
	memory = (int*) realloc(memory, 20*sizeof(int));
	printf("\n%realloc = %d", sizeof(memory));
	return 0;
}

