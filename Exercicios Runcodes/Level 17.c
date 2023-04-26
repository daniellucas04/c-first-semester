#include<stdio.h>

int main(){
	float khw, preco_inicial, preco_final;
	char aposentado;
	
	scanf("%f", &khw);
	scanf(" %c", &aposentado);
	
	preco_inicial = khw*1.5;
	
	if(aposentado == 's'){
		preco_final = preco_inicial - (preco_inicial*0.15);
		printf("%.1f", preco_final);
	}else{
		printf("%.1f", preco_inicial);
	}
	
	return 0;
}
