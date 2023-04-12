#include<stdio.h>

//Faça um algoritmo para ler dois números e realizar as operações aritméticas: 
//adição, subtração e multiplicação. Para cada operação o resultado deve ser impresso no vídeo.

int main(void){
	//declarar variaveis
	int x, y;
	
	//recebe o valor de x
	scanf("%d", &x);
	//recebe o valor de y
	scanf("%d", &y);
	
	int sum = x+y;
	int minus = x-y;
	int times = x*y;

	//saida de dados
	printf("%d, %d, %d", sum, minus, times);

	return 0;
}
