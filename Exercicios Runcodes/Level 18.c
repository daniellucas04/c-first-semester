#include<stdio.h>

// Leia um n�mero e imprimir se ele � "positivo", "negativo" ou "nulo". (Imprimir somente o que est� entre aspas " ".)

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
