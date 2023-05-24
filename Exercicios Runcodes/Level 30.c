#include<stdio.h>

int main(){
	long long int fact=1;
	int n, i;
	
	scanf("%d", &n);
	
	for(i=n;i>1;i--){
		fact*=i;
	}
	
	printf("%lld", fact); 
	return 0;
}


// 4 formas de fazer !fatorial

/*
	// Usando while (incremento)
	while(i<=number){
		fact *= i;
		i++;
	}
	
*/

/*
	// Usando for (incremento)
	for(i=1;i<=number;i++){
		fact*=i;
	}

*/

/*
	// Usando while (decremento)
	while(n>1){
		fact*=n;
		n--;
	}
	
*/

/*
	// Usando for (decremento)
	for(i=n;i>1;i--){
		fact*=i;
	}

*/
