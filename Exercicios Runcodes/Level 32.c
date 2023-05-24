#include<stdio.h>

int main(){
	float arr[10];
	int i;
	
	for(i=0; i<10; i++)
		scanf("%f", &arr[i]);
		
	for(i=9; i>=0; i--)
		printf("%.1f\n", arr[i]);
	
	return 0;
}
