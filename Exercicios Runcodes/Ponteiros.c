#include<stdio.h>

int insert(int *ptr){
	int i;
	
	for(i=0; i<10; i++)
		scanf("%d", ptr[i]);
		
	return *ptr;
}

int main(){
	int arr[10], i;
	int *ptr;
	
	ptr=&arr[10];
	arr=insert(*ptr);
	
	return 0;
}
