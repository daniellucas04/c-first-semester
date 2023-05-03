#include<stdio.h>

/*
Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o.
As informa��es necess�rios s�o: idade e anos trabalhados. 
As condi��es para ser qualificado a aposentadoria s�o:
Ter no m�nimo 65 anos de idade ou; Ter trabalhado no m�nimo 30 anos ou; Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.
Imprima "qualificado" caso ao menos uma das tr�s condi��es sejam satisfeitas ou "desqualificado" caso contrario.
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
