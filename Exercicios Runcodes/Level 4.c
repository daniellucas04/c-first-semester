#include<stdio.h>

//Fa�a um algoritmo para ler dois n�meros e realizar as opera��es aritm�ticas: 
//adi��o, subtra��o e multiplica��o. Para cada opera��o o resultado deve ser impresso no v�deo.

int main(void){
	//declarar variaveis
	int x, y, sum, times, minus;
	
	//recebe o valor de x
	scanf("%d", &x);
	//recebe o valor de y
	scanf("%d", &y);

	//saida de dados
	printf("soma: %d\n", (x+y));
	printf("subtracao: %d\n", (x-y));
	printf("multiplicacao: %d\n", (x*y));

	return 0;
}
