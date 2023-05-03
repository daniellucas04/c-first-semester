#include<stdio.h>
/*
Faça um algoritmo que entre com três notas e imprima.
Cada nota é independente e tem um conceito de corte diferente.
Para nota1 o conceito é >=70; para a nota2 o conceito é >=75 e para nota3 o conceito é >=80.
Imprima "aprovado", caso ao menos uma dessas condições forem satisfeitas ou "reprovado", caso contrário.
*/

int main(){
	float n1, n2, n3;
	
	scanf("%f %f %f", &n1, &n2, &n3);
	
	if(n1>=70 || n2>=75 || n3>=80){
		printf("aprovado");
	}else{
		printf("reprovado");
	}
	
	return 0;
}
