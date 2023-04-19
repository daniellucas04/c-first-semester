#include<stdio.h>

// Faça um algoritmo para ler quatro notas e imprimir a média ponderada dessas notas. 
// Considere que os pesos das são: 1, 2, 3 e 4, respectivamente. 
// Ex do processamento: mp=(n1*1+n2*2+n3*3+n4*4)/(1+2+3+4)

int main(void){
	// declarar variaveis
	float n1, n2, n3, n4;
	
	// receber valores
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	// processamento de dados
	float mp = (n1*1 + n2*2 + n3*3 + n4*4)/(10);
	
	// saida de dados
	printf("%.1f", mp);
	
	return 0;
}
