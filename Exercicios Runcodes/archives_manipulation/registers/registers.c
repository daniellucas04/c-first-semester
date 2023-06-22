#include<stdio.h>
#include<stdlib.h>

typedef struct Register{
    char nome[50];
    int idade;
    char ba[9];
} Register;

void verificaArquivo(FILE *ptr){
    if(ptr==NULL) printf("Erro na abertura do arquivo!");
}

void gravarRegistro(){
    FILE *ptr; // cria variavel ponteiro para o arquivo
    Register reg;
    //abrindo o arquivo
    ptr = fopen("registers.txt", "w");
    
    //verifica se o arquivo existe
    verificaArquivo(ptr);

    //recebe o nome do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", &*reg.nome);
    fprintf(ptr, "Nome: %s", reg.nome);
    
    //recebe a idade do aluno
    printf("Digite a idade do aluno: ");
    scanf("%i", &reg.idade);
    fprintf(ptr, "\nIdade: %i", reg.idade);

    //recebe a matricula do aluno
    printf("Digite a matricula do aluno: ");
    scanf("%s", &*reg.ba);
    fprintf(ptr, "\nBA (Matrícula): %s", reg.ba);

    fclose(ptr); //file close
    printf("\n\nDados gravados com sucesso!\n\n");
}

void lerRegistro(){
    FILE *ptr;

    //abrir arquivo
    ptr=fopen("registers.txt", "r");

    //verifica se o arquivo existe
    verificaArquivo(ptr);

    char content[100];
    printf("\n-------------Conteudo do arquivo-------------\n\n");
    while(fgets(content, 100, ptr)!=NULL) {
        printf("%s", content);
    }
    printf("\n\n---------------------------------------------\n");
    
    fclose(ptr);
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
        scanf("%d", &op);

        escolha(op);
    } while(op!=3);

    return 0;
}