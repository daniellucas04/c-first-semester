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
	
	sum = x+y;
	minus = x-y;
	times = x*y;

	//saida de dados
	printf("%d, %d, %d", sum, minus, times);

	return 0;
}
