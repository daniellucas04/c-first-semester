#include<stdio.h>

int main(){
	int inicio, fim, i;
	
	scanf("%d %d", &inicio, &fim);
	
	i=inicio;
	
	while(i%5!=0){
		i++;
	}
	
	for(inicio=i; i<=fim; i+=5){
		printf("%d\n", i);
	}
	
	return 0;
}
