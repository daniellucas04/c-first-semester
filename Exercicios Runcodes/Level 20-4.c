#include<stdio.h>

/*
Para um processo seletivo é necessário que o candidato faça 75 pontos para ser aprovado ou 60 pontos caso o candidato seja afiliado.
Faça um algoritmo que receba a nota e afiliado (s,n).
Caso o candidata satisfaça ao menos uma condição imprima "aprovado", ou "reprovado" caso contrário.
*/

int main(){
	int nota;
	char afiliado;
	
	scanf("%d %c", &nota, &afiliado);
	
	if(nota>=75 || (afiliado=='s' && nota>=60)){
		printf("aprovado");
	}else{
		printf("reprovado");
	}
	
	return 0;
}
