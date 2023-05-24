#include<stdio.h>

int main(){
<<<<<<< HEAD
	int i, inicio, final, res=0;
	
	scanf("%d %d", &inicio, &final);
	
	for(i=inicio;i <=final; i++)
		res += i;
=======
	int inicio, fim, i, res;
	
	scanf("%d %d", &inicio, &fim);
	
	for(i=inicio; i<=fim; i++){
		res = i + i+1;
	}
>>>>>>> b777221a72ec0e5b539c89af8a5e8b6db2878eed
	
	printf("%d", res);
	
	return 0;
}
