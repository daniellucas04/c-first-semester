#include<stdio.h>

int main(){
	int number, metade, quadrado;
	
	scanf("%d", &number);
	
	if(number > 20){
		metade = number/2;
		printf("%d", metade);
	}else{
		quadrado = number*number;
		printf("%d", quadrado);
	}
	
	return 0;
}
