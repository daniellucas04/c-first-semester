#include<stdio.h>

int main(void){
	double number;
	
	scanf("%lf", &number);

	double pow = number*number*number;
	
	printf("%.0lf", pow);	
}
