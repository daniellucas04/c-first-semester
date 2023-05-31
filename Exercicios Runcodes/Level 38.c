#include<stdio.h>

int main(){
	int arr[5], i, mult=1;
	
	for(i=0; i<5; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i<5; i++){
		printf("%d\n", arr[i]);
		mult*=arr[i];
	}
	
	printf("%d", mult);
	return 0;
}
