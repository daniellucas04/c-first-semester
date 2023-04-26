#include<stdio.h>

int main(){
	int A, B, C, media;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	media = (A + B + C)/3;
	
	if((media > A && media > B) || (media > B && media > C) || (media > C && media > A)){
		printf("maior");
	}else{
		printf("menor");
	}
	
	return 0;
}
