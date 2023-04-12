#include<stdio.h>

// Faça um algoritmo que leia um número inteiro e imprima seu dobro e sua metade.

int main(void){
	// declarar variavel
	int number;
	
	// recebe valor
	scanf("%d", &number);
	
	// mostra resultado
	printf("dobro: %d\n", (number*2));
	printf("metade: %d\n", (number/2));
	
	return 0;
}
