#include<stdio.h>

/*
Um posto m�gico est� vendendo combust�veis com uma porcentagem de descontos:
se o c abastecimento for com Etanol e at� 20 litros, o desconto ser� de 3%, caso seja acima de 20 litros, desconto de 5%.
Se o abastecimento for com Gasolina e at� 20 litros, desconto de 4%, caso seja acima de 20 litros, desconto de 6%.
Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel ( e (Etanol) ou g (Gasolina)),
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da gasolina � 5.00 e o pre�o do litro do �lcool � 3.90.
Utilizar a fun��o de arredondamento com duas casas decimais (round(valorfinal,2)).
*/

int main(){
	float litros, preco_gasolina, preco_etanol, desc=0;
	char tipo_combustivel;
	
	scanf("%f %c", &litros, &tipo_combustivel);
	
	preco_gasolina = litros*5.00;
	preco_etanol = litros*3.90;
	
	if(tipo_combustivel == 'g'){
		if(litros<=20){
			desc = preco_gasolina*0.04;
		}else{
			desc = preco_gasolina*0.06;
		}
		preco_gasolina -= desc;
		printf("%.1f", preco_gasolina);
	}
	
	if(tipo_combustivel == 'e'){
		if(litros<=20){
			desc = preco_etanol*0.03;
		}else{
			desc = preco_etanol*0.05;
		}
		preco_etanol -= desc;
		printf("%.1f", preco_etanol);
	}
	
	return 0;
}
