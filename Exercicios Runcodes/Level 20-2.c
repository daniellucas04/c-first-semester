#include<stdio.h>
/*
Fa�a um algoritmo que entre com tr�s notas e imprima.
Cada nota � independente e tem um conceito de corte diferente.
Para nota1 o conceito � >=70; para a nota2 o conceito � >=75 e para nota3 o conceito � >=80.
Imprima "aprovado", caso ao menos uma dessas condi��es forem satisfeitas ou "reprovado", caso contr�rio.
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
