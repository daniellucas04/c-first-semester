#include<stdio.h>

int main(){
	int soma=0, i;
	
	for(i=1; i<=100; i+=2){
		soma+=i;
	}
	
	printf("%d", soma);
	
	return 0;
}
