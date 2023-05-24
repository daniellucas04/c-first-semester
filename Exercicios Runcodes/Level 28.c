#include<stdio.h>

int main(){
	int n, p, i, aux;
	
	scanf("%d %d", &n, &p);
	
	aux = n;
	for(i=1; i<p; i++){	
		n = aux*n;
	}
	
	printf("%d", n);
	
	return 0;
}
