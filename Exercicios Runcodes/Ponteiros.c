#include<stdio.h>

void insert(int *ptr){
	int i;
	
	for(i=0; i<10; i++){
		printf("arr[%d]: ", i, *(ptr+i));
		scanf("%i", ptr+i);	
	}
		
}

void print(int *ptr){
	int i;

	for(i=0; i<10; i++)
		printf("arr[%d] = %d\n", i, *(ptr+i));
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10}, i;
	int *ptr;

	ptr=arr;
	insert(ptr);
	print(ptr);
	return 0;
}
