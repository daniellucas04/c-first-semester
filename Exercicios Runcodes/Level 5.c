#include<stdio.h>

// Fa�a um algoritmo que leia um n�mero inteiro e imprima seu dobro e sua metade.

int main(void){
	// declarar variavel
	int number, dobro, metade;
	
	// recebe valor
	scanf("%d", &number);
	
	dobro = number*2;
	metade = number/2;
	
	// mostra resultado
	printf("%d,%d", dobro, metade);
	
	return 0;
}
