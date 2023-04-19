#include<stdio.h>

int main(){
	float nhs, salario_bruto, desconto, salario_liquido;
	
	scanf("%f", &nhs);
	
	salario_bruto = nhs*3;
	desconto = (salario_bruto*8)/100;
	salario_liquido = salario_bruto - desconto;
	
	printf("%.1f", salario_liquido);
	
	return 0;
}
