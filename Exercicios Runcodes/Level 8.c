#include<stdio.h>

//Fa�a o c�lculo da �rea de um ret�ngulo. (rt=largura * comprimento)

int main(){
	int largura, comprimento;
	
	scanf("%d", &largura);
	scanf("%d", &comprimento);
	
	int rt = largura*comprimento;
	
	printf("%d", rt);
}

