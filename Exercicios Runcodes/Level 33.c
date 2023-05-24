#include<stdio.h>

int main(){
	float notas[4], soma=0, media=0;
	int i;
	
	for(i=0; i<4; i++)
		scanf("%f", &notas[i]);
	
	for(i=0; i<4; i++){
		printf("%.0f\n", notas[i]);
		soma += notas[i];
	}
		
	media = soma/4;
	
	printf("%.1f", media);
	
	return 0;
}
