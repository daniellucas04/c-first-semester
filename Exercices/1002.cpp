#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	double area, radius, p = 3.14159;
	
	scanf("%lf", &radius);
	
	area = p*pow(radius, 2.00);
	
	printf("A=%.4lf", area);
}
