#include<stdio.h>

// Fa�a um algoritmo que leia um n�mero inteiro e imprima seu dobro e sua metade.

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
