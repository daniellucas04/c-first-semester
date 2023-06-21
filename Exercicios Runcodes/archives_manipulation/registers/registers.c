#include<stdio.h>
#include<stdlib.h>

typedef struct Register{
    char nome[50];
    int idade;
    char ba[9];
} Register;

void gravarRegistro(){
    FILE *ptr; // cria variavel ponteiro para o arquivo
    Register reg;
    //abrindo o arquivo
    ptr = fopen("registers.txt", "w");
    
    if(ptr==NULL)
	{
		printf("Erro na abertura do arquivo!");
		return 1;
	}

    //recebe o nome do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", &reg.nome);
    fprintf(ptr, "nome: %s", reg.nome);
    
    //recebe a idade do aluno
    printf("Digite a idade do aluno: ");
    scanf("%i", &reg.idade);
    fprintf(ptr, "\nidade: %i", reg.idade);

    //recebe a matricula do aluno
    printf("Digite a matricula do aluno: ");
    scanf("%s", &reg.ba);
    fprintf(ptr, "\nBA: %s", reg.ba);

    fclose(ptr); //file close
    printf("Dados gravados com sucesso!");
}

void lerRegistro(){
    
}

void escolha(int op){
    switch(op){
        case 1:
            gravarRegistro();
            break;
        case 2:
            lerRegistro();
            break;
        case 3:
            break;
        default: printf("Operação inválida");
    }
}

int main(){
    int op;
    //menu
    do{
        printf("1 - Cadastrar novo aluno\n");
        printf("2 - Ler registro de aluno\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%i", op);

        escolha(op);
    } while(op!=3);

    return 0;
}