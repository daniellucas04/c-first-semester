#include<stdio.h>

int main(){
	int inicio, fim, i, res;
	
	scanf("%d %d", &inicio, &fim);
	
	for(i=inicio; i<=fim; i++){
		res = i + i+1;
	}
	
	printf("%d", res);
	
	return 0;
}
