#include<stdio.h>

/*
Para um processo seletivo � necess�rio que o candidato fa�a 75 pontos para ser aprovado ou 60 pontos caso o candidato seja afiliado.
Fa�a um algoritmo que receba a nota e afiliado (s,n).
Caso o candidata satisfa�a ao menos uma condi��o imprima "aprovado", ou "reprovado" caso contr�rio.
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
