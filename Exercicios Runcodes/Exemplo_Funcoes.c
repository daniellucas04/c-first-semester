#include<stdio.h>

int soma(int a, int b){
	return a+b;
}

float mediaPonderada(int n1, int n2, float p1, float p2){
	float media = 0.0;
	media = (n1*p1+n2*p2)/(p1+p2);
	return media;
}
	
int main(){
	// Exemplo de soma
	int a=10, b=2, res=0;
	res = soma(a, b);
	printf("%d", res);
	
	// Exemplo media ponderada
	int n1=3, n2=5;
	float p1=0.1, p2=0.9, nf;
	nf = mediaPonderada(n1, n2, p1, p2);
	printf("%f", nf);
	
	return 0;
}
