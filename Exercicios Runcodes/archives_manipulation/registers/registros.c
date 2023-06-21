#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	char ba[9];
} registro;

void ler()
{
}

void gravar(){
	FILE *ptr;
	registro a;
	ptr = fopen("registros.txt","w");
	
	//testar se o arquivo foi criado
	if(ptr==NULL)
	{
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	//file printf
	printf("Digite o nome:");
	scanf(" %s",&a.nome);
	fprintf(ptr,"\nnome: %s",a.nome);
	
	printf("Digite a idade:");
	scanf("%i",&a.idade);
	fprintf(ptr,"\nidade: %i",a.idade);
	
	printf("Digite o BA:");
	scanf(" %s",&a.ba);
	fprintf(ptr,"\nba: %i",a.ba);

	//file close
	fclose(ptr);
	
}
void escolha(int op){
	switch(op)
	{
		case 1:
			gravar();
			break;
		case 2:
			ler();
			break;
		case 3:
			break;
	}
}

int main()
{
	int op;
	FILE *ptr;
	//menu
	do{
	printf("\n1 - Cadastrar novo aluno");
	printf("\n2 - Ler registro de alunos");
	printf("\n3 - Sair");
	printf("\nEscolha uma opção:");
	scanf("%i",&op);
	escolha(op);
	}while (op!=3);
	
	return 0; 
}
