#include<stdio.h>

//int main(){
//	float khw, preco_inicial, preco_final;
//	char aposentado;
//	
//	scanf("%f", &khw);
//	scanf(" %c", &aposentado);
//	
//	preco_inicial = khw*1.5;
//	
//	if(aposentado == 's'){
//		preco_final = preco_inicial - (preco_inicial*0.15);
//		printf("%.1f", preco_final);
//	}else{
//		printf("%.1f", preco_inicial);
//	}
//	
//	return 0;
//}

int main(){
	float kwh, valor, desc;
	char ap;
	
	scanf("%f", &kwh);
	scanf(" %c", &ap);
	
	valor = kwh*1.5;
	desc = 0;
	
	if(ap=='s'){
		desc = valor*0.15;
	}
	valor = valor - desc;
	printf("%.1f", valor);
}
