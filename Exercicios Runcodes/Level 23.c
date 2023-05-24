#include<stdio.h>

int main(){
	int i, inicio, final, res=0;
	
	scanf("%d %d", &inicio, &final);
	
	for(i=inicio;i <=final; i++)
		res += i;
	
	printf("%d", res);
	
	return 0;
}
