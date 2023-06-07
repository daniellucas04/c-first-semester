#include<stdio.h>

float media(int n1, int n2){
	float md=0.0;
	md=(float)(n1+n2)/2;
	return md;
}

int main(){
	float medias[4];
	int i, j, mat[4][2];
	
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		medias[i]=media(mat[i][0], mat[i][1]);
	}
	
	for(i=0; i<4; i++){
		printf("%.1f\n", medias[i]);
	}
	
	return 0;
}
