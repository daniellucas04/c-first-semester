#include<stdio.h>

/*
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
As informações necessários são: idade e anos trabalhados. 
As condições para ser qualificado a aposentadoria são:
Ter no mínimo 65 anos de idade ou; Ter trabalhado no mínimo 30 anos ou; Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Imprima "qualificado" caso ao menos uma das três condições sejam satisfeitas ou "desqualificado" caso contrario.
*/

int main(){
	int idade, anos_trabalhados;
	
	scanf("%d %d", &idade, &anos_trabalhados);
	
	if(idade>=65 || anos_trabalhados>=30 || (idade>=60 && anos_trabalhados >= 25)){
		printf("qualificado");
	}else{
		printf("desqualificado");
	}
	
	return 0;
}
