#include<stdio.h>

//Fa�a um algoritmo para verificar se o ano � bissexto. Se o ano for bissexto imprimir "ano bissexto" e "nao bissexto" caso contr�rio.

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
