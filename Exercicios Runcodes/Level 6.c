#include<stdio.h>

int main(void){
	// declara variavel
	double number;
	
	// ler dados
	scanf("%lf", &number);

	// calcula potenciacao
	double pow = number*number*number;
	
	// mostra resultado
	printf("%.0lf", pow);	
}
