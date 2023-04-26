#include<stdio.h>

// Leia um número e imprimir se ele é "positivo", "negativo" ou "nulo". (Imprimir somente o que está entre aspas " ".)

int main(){
	int number;
	
	scanf("%d", &number);
	
	if(number > 0){
		printf("positivo");
	}else if(number < 0){
		printf("negativo");
	}else{
		printf("nulo");
	}
	
	return 0;
}
