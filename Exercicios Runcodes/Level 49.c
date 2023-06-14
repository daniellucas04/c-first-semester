#include<stdio.h>

float media_ponderada(float n1, float n2, float peso1, float peso2){
	return (n1*peso1+n2*peso2)/(peso1+peso2);
}

int main(){
	float n1, n2, peso1, peso2;

	scanf("%f %f", &n1, &n2);
	scanf("%f %f", &peso1, &peso2);
	
	printf("%.1f", media_ponderada(n1, n2, peso1, peso2));
		
	return 0;
}
