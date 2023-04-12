#include<stdio.h>

//Faça um algoritmo para ler dois números e realizar as operações aritméticas: 
//adição, subtração e multiplicação. Para cada operação o resultado deve ser impresso no vídeo.

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
