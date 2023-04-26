#include<stdio.h>

//Faça um algoritmo para verificar se o ano é bissexto. Se o ano for bissexto imprimir "ano bissexto" e "nao bissexto" caso contrário.

int main(){
	int year;
	
	scanf("%d", &year);
	
	if(year%4 == 0){
		printf("ano bissexto");
	}else{
		printf("nao bissexto");
	}
	
	return 0;
}
