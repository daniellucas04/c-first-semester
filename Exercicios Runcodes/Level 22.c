#include<stdio.h>

int main(){
	int number, i;
	char name[10];
	
	scanf("%d %s", &number, &name);
	
	
	for(i=0; i<number; i++)
		printf("%s\n", name);
	
	return 0;
}
