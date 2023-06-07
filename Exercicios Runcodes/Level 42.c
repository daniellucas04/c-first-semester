#include<stdio.h>

int main(){
	int mat[3][3], i, j, soma=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		soma+=mat[i][i];
	}
	
	printf("%d", soma);
	
	return 0;
}
