#include<stdio.h>

//Fa�a o c�lculo da �rea de um ret�ngulo. (rt=largura * comprimento)

int main(){
	// declara variaveis
	int largura, comprimento;
	
	// ler dados
	scanf("%d", &largura);
	scanf("%d", &comprimento);
	
	// calcula area do retangulo
	int rt = largura*comprimento;
	
	// mostra area
	printf("%d", rt);
	
	return 0;
}

