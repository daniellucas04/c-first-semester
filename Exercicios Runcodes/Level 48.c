#include<stdio.h>

float salario_liquido(float salario){
	float sal_liq = salario-(salario*0.07);
	return sal_liq;
}

int main(){
	float salario;
	
	scanf("%f", &salario);
	
	printf("%.1f", salario_liquido(salario));
		
	return 0;
}
