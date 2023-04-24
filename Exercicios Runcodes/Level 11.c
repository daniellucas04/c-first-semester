#include<stdio.h>

int main(){
	int A, B, C;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	if((A+B) > C){
		printf("maior");
	} else{
		printf("menor");
	}
	
	return 0;
}
