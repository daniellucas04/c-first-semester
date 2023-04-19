#include<stdio.h>

//Faça o cálculo da área de um retângulo. (rt=largura * comprimento)

int main(){
	int largura, comprimento;
	
	scanf("%d", &largura);
	scanf("%d", &comprimento);
	
	int rt = largura*comprimento;
	
	printf("%d", rt);
}

