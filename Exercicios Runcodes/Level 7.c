#include<stdio.h>
#include<math.h>

// Escreva um algoritmo que solicite ao usuário o raio e a altura de um cilindro circular, e imprima o volume do cilindro.
// O volume de um cilindro circular é calculado pela seguinte formula: volume = 3.14 * raio * raio * altura.
// Utilizar uma casa decimal como arredondamento. 
// Ex: print(round(volume,1))

int main(void){
	// declarar variaveis
	float radius, height;
	
	// receber dados
	scanf("%f", &radius);
	scanf("%f", &height);

	// processamento de dados
	float volume = 3.14 * radius * radius * height;
	
	// saida de dados
	printf("%.1f", volume);
	
	return 0;
}
