#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr; // cria variavel ponteiro para o arquivo

    //abrindo o arquivo
    ptr = fopen("archive.txt", "w");

    //testar se o arquivo foi criado
    if(ptr == NULL) {
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    
    fprintf(ptr, "Hello world\n"); // file printf
    int value;
    printf("Digite um valor inteiro: ");
    scanf("%i", &value);

    fprintf(ptr, "valor: %i", value);

    fclose(ptr); //file close
    printf("Dados gravados com sucesso!");
    return 0;
}