#include<stdio.h>

int main(){
	float n1, n2, media;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media < 6){
		printf("reprovado");
	}else{
		printf("aprovado");
	}
	
	return 0;
}
