#include<stdio.h>

int main(){
	int a[3][3], i, j, soma=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			soma+=a[i][j];
		}
	}
	
	printf("%d", soma);	
	
	return 0;
}
