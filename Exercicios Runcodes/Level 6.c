#include<stdio.h>
#include<math.h>

int main(void){
	float number, aux;
	
	scanf("%f", &number);
	
	aux = pow(number, 3);
	
	printf("%.1f", aux);
	
	return 0;
}
