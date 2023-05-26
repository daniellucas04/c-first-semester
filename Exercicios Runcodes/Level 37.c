#include<stdio.h>

int main(){
	int arr[5], i, soma=0;
	
	for(i=0; i<5; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<5; i++){
		printf("%d\n", arr[i]);
		soma += arr[i];
	}
	
	printf("%d", soma);
	
	return 0;
}
