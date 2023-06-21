#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr; //cria variavel pointeiro para o arquivo
    ptr = fopen("archive.txt", "r"); //abrindo o arquivo para leitura ((r)read)

    //testar se o arquivo existe
    if(ptr==NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    char text[50];
    //pegar valor no arquivo
    while(fgets(text, 50, ptr)!=NULL){
        printf("%s", text);
    }

    //fechar arquivo
    fclose(ptr);

    return 0;
}