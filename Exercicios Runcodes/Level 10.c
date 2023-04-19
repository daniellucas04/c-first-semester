#include<stdio.h>

int main(){
	// declarar variaveis
	float nhs, salario_bruto, desconto, salario_liquido;
	
	// ler dados
	scanf("%f", &nhs);
	
	//calcula salario bruto
	salario_bruto = nhs*3;
	// calcula desconto
	desconto = (salario_bruto*8)/100;
	// calcula salario liquido
	salario_liquido = salario_bruto - desconto;
	
	// mostra salario liquido
	printf("%.1f", salario_liquido);
	
	return 0;
}
