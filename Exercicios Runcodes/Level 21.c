#include<stdio.h>

int main(){
	int i;
	char name[30];

	scanf("%s", &name);
	
	for(i=0; i<10; i++)
		printf("%s\n", name);
		
	return 0;
}
