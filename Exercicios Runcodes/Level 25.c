#include<stdio.h>

int main(){
	int number, i, sum=0;
	
	scanf("%d", &number);
	
	for(i=1; i<=number; i++){
		printf("%d\n", i);
		sum += i;
	}
	printf("%d", sum);
	
	return 0;
}
