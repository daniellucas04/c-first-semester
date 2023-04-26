#include<stdio.h>

/*
Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3.
Calcular a média aritmética simples (ms=(n1+n2+n3)/3) de aproveitamento, imprima o conceito do aluno de acordo sendo:
ms >= 9.0, imprimir "A"; se ms<9 e ms>=7.5, imprimir "B"; se ms<7.5 e ms>6, imprimir "C" e se ms<6, imprimir "D".
*/

int main(){
	float n1, n2, n3, media;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	if(media >= 9.0){
		printf("A");
	}else if(media < 9.0 && media >= 7.5){
		printf("B");
	}else if(media < 7.5 && media >= 6.0){
		printf("C");
	}else{
		printf("D");
	}
	
	return 0;
}
