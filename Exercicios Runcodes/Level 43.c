#include<stdio.h>

int main(){
	int i, j;
	float mat[4][2], arr[4];
	
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0;j<2;j++){
			arr[i]=(mat[j]+mat[j+1])/2;
		}
	}
	
	return 0;
}
