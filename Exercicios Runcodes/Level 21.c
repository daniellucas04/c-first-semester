#include<stdio.h>

int main(){
	char nome[20];
	int i;
	gets(nome);
	
	for(i=0; i<10; i++){
		printf("%s \n", nome);
	}
	return 0;
}
